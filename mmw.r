
#Pearson Correlation Test
library(ggplot2)
cor <- read.csv ("C:\Users\Leny Bondoc\Documents\Book1.csv")

correlation <- cor(cor$CorrectX, cor$AttitudeY)
print(correlation)


# Print the standard deviation
print(paste ("Standard Deviation of X: ", sd_x))
print(paste ("Standard Deviation of Y: ", sd_y))
#Vanilla Pearson Test
cor.test(x, y, method = "pearson")

ggplot(cor, aes(x = CorrectX, y = AttitudeY)) +
  geom_point() +
  geom_smooth(method = "lm") +
  labs(title = "Correlation Plot", x = "Scores", y = "Attitude")

# Read the CSV file into a dataset with a different variable name


{
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

#Plot the Dataset
ggplot(cor, aes(x = CorrectX, y = AttitudeY)) +
  geom_point() +
  geom_smooth(method = "lm") +
  labs(title = "Correlation Plot", x = "Scores", y = "Attitude") +
  geom_text(label = paste("Correlation Score:", round(cor(cor$CorrectX, cor$AttitudeY), 4)), x = -Inf, y = Inf, hjust = 0, vjust = 1, color = "black")+
  geom_text(label = paste("Mean of X:", mean_x), x = -Inf, y = -Inf, hjust = 0, vjust = -39, color = "black")+
  geom_text(label = paste("Mean of Y:", mean_y), x = -Inf, y = -Inf, hjust = 0, vjust = -38, color = "black")+
  geom_text(label = paste("(X - mean of X)*(y - mean of Y): ", sum_product_deviations), x = -Inf, y = -Inf, hjust = 0, vjust = -37, color = "black")+
  geom_text(label = paste("(x - mean of X)^2 : ", sum_squared_deviations_x), x = -Inf, y = -Inf, hjust = 0, vjust = -36, color = "black")+
  geom_text(label = paste("(y - mean of Y)*(y - mean of Y): ", sum_squared_deviations_y), x = -Inf, y = -Inf, hjust = 0, vjust = -35, color = "black")+
  geom_text(label = paste("Multiply ((x - mean of X)^2) * (y - mean of Y)*(y - mean of Y) : ", divisor_multiply1), x = -Inf, y = -Inf, hjust = 0, vjust = -34, color = "black")+
  geom_text(label = paste("SquareRoot: ", round((square), 4)), x = -Inf, y = -Inf, hjust = 0, vjust = -33, color = "black")+
  geom_text(label = paste("B = Slope: ",  round((slope), 4)), x = -Inf, y = -Inf, hjust = 0, vjust = -32, color = "black")+
  geom_text(label = paste("SD of X: ", round((sd_x), 4)), x = -Inf, y = -Inf, hjust = 0, vjust = -31, color = "black")+
  geom_text(label = paste("SD of Y: ", round((sd_y), 4)), x = -Inf, y = -Inf, hjust = 0, vjust = -30, color = "black")
  
}
