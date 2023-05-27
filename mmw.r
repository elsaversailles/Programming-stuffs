#Pearson Correlation Test
library(ggplot2)
cor <- read.csv ("C:\Users\Leny Bondoc\Documents\Book1.csv")

correlation <- cor(cor$CorrectX, cor$AttitudeY)
print(correlation)


# Read the CSV file into a dataset with a different variable name

# Extract the variables
x <- cor$CorrectX
y <- cor$AttitudeY

# Calculate the mean of x and y
mean_x <- mean(x)
mean_y <- mean(y)

#Calculate B = slope and Y intercept

model <- lm(y ~ x)
slope <- coef(model)["x"]
intercept <- coef(model)["(Intercept)"]

#Graph 
plot <- ggplot(mydata, aes(x = x, y = y)) +
  geom_point() +
  labs(x = "CorrectX", y = "AttitudeY")

# Add the line representing the slope
plot_with_slope <- plot +
  geom_abline(intercept = coef(model)["(Intercept)"], slope = slope, color = "red")


# Calculate the deviations from the means
deviations_x <- x - mean_x
deviations_y <- y - mean_y

#Calculate X and Y SD
sd_x <- sd(x)
sd_y <- sd(y)
# Calculate the sum of the products of deviations
sum_product_deviations <- sum(deviations_x * deviations_y)

# Calculate the sum of the squared deviations
sum_squared_deviations_x <- sum(deviations_x^2)
sum_squared_deviations_y <- sum(deviations_y^2)

# Calculate the bottom divisor
divisor_multiply1 <- sum_squared_deviations_x * sum_squared_deviations_y

#Squareroot the divisor
square <- sqrt(divisor_multiply1)
# Calculate the Pearson correlation coefficient
correlation <- sum_product_deviations / sqrt(sum_squared_deviations_x * sum_squared_deviations_y)

#breakdown of correlation
cor2 <- divisor_multiply1/square

# Print the intermediate values and the correlation coefficient
print(paste ("Mean of X: ", mean_x))

print(paste ("Mean of Y: ", mean_y))

print("Standard Deviation of X VALUES:")
print(deviations_x)

print("Standard Deviation of Y VALUES:")
print(deviations_y)

#numerator
print (paste ("(X - mean of X)*(y - mean of Y): ", sum_product_deviations))

#Divisor 

#2
print(paste ("(x - mean of X)^2 : ", sum_squared_deviations_x))

#1
print(paste ("(y - mean of Y)*(y - mean of Y): ", sum_squared_deviations_y))

#Divisor Method
print(paste ("Multiply ((x - mean of X)^2) * (y - mean of Y)*(y - mean of Y) : ", divisor_multiply1))
#Squareroot
print(paste ("SquareRoot: ", square))

#Pearson Correlation
print(paste ("Correlation: ", cor2))

print(paste ("Correlation: ", correlation))

#B = slope and Y intercept
print(paste ("B = Slope: ", slope))
print(paste("Y intercept: ", intercept))


#Plot the Dataset
plot(x, y, xlab = "CorrectX", ylab = "AttitudeY")
abline(coef(model), col = "red")

# Print the standard deviation
print(paste ("Standard Deviation of X: ", sd_x))
print(paste ("Standard Deviation of Y: ", sd_y))

      
