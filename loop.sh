#!/bin/bash

# Ask the user how many numbers they want to input
echo "How many numbers do you want to input?"
read numCount

# Initialize variables to store the sums of odd and even numbers
oddSum=0
evenSum=0

# Initialize a variable to store the sum of negative numbers
negativeSum=0

# Initialize a variable to store the sum of positive numbers
positiveSum=0

# Loop through and ask the user for each number
for ((i=1;i<=numCount;i++)); do
  echo "Enter number $i:"
  read num

  # Check if the number is odd or even
  if [[ $(($num % 2)) -eq 0 ]]; then
    # The number is even, so add it to the sum of even numbers
    evenSum=$((evenSum+num))
  else
    # The number is odd, so add it to the sum of odd numbers
    oddSum=$((oddSum+num))
  fi

  # Check if the number is negative or positive
  if [[ $num -lt 0 ]]; then
    # The number is negative, so add it to the sum of negative numbers
    negativeSum=$((negativeSum+num))
  else
    # The number is positive, so add it to the sum of positive numbers
    positiveSum=$((positiveSum+num))
  fi
done

# Print the sum of odd numbers
echo "The sum of odd numbers is: $oddSum"

# Print the sum of even numbers
echo "The sum of even numbers is: $evenSum"

# Print the sum of negative numbers
echo "The sum of negative numbers is: $negativeSum"

# Print the sum of positive numbers
echo "The sum of positive numbers is: $positiveSum"
