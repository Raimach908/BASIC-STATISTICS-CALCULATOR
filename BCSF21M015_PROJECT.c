#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define size 200
// All required prototypes
void arithematic_mean();
void geometric_mean();
void harmonic_mean();
void range();
void mode();
void median();
void standared_deviation();
void variance();
void covariance();
void perason_correlation();
void linear_correlation_coefficient();
void population_correlation_coefficient();
void sample_correlation_coefficient();
void regression();
void history();
void exit_prog();
// Driver function
int main()
{   
    // Formatting
    printf("\033[1;31m");
    // upper-left corner
	printf("\n\t\t\t%c", 220);
    // upper border lines
	for (int i = 1; i <= 38; i++) 
	{
		printf("%c", 220);
	}
     // upper-right corner
	printf("%c\n", 220);
    // left box line - text - right box line
	printf("\t\t\t%c                                      %c\n", 219, 219);
	printf("\t\t\t%c                                      %c\n", 219, 219);
	printf("\t\t\t%c        ", 219);
	printf("\033[1;35m");
	printf("STATISTICS CALCULATOR"); // left box line - text - rigfht box line
	printf("\033[0m");
	printf("\033[1;31m");
	printf("         %c\n", 219);
	printf("\t\t\t%c                                      %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c                                      %c\n", 219, 219); // left box line - text - rigfht box line
	printf("\t\t\t%c", 219);												  // lower-right corner
	for (int i = 1; i <= 38; i++)											  // lower box lines
	{
		printf("%c", 220);
	}
	printf("%c\n", 219); // lower-right lines
	printf("\033[0;35m");
    printf("\n\033[1;36m %s\n","\t\t\t      <<<<-----Hi! WELCOME----->>>>\n");
    // Main task 
    int choice = 0;
    while(!(choice >= 1 && choice <= 16))
    {
        // Menu
        printf("\n\033[1;35m %s\n","  What do you want to calculate?\n");
        printf("\033[0;31m");
        printf("\n\t1.Mean / Arithmatic mean");
        printf("\n\t2.Geometric mean");
        printf("\n\t3.Harmonic mean");
        printf("\n\t4.Range");
        printf("\n\t5.Mode");
        printf("\n\t6.Median");
        printf("\n\t7.Standared deviation");
        printf("\n\t8.Variance");
        printf("\n\t9.Covariance");
        printf("\n\t10.Pearson Correlation Cofficient");
        printf("\n\t11.Linear Correlation Coefficient");
        printf("\n\t12.Population Correlation Coefficient");
        printf("\n\t13.Sample Correlation Coefficient");
        printf("\n\t14.Regression");
        printf("\n\t15.View History");
        printf("\n\t16.Exit");

        printf("\033[1;35m %s\n","\nSELECT your choice: ");
        printf("\033[0;35m");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            arithematic_mean();
            break;
        case 2:
            geometric_mean();
            break;
        case 3:
            harmonic_mean();
            break;
        case 4:
            range();
            break;
        case 5:
            mode();
            break;
        case 6:
            median();
            break; 
        case 7:
            standared_deviation();
            break; 
        case 8:
            variance();
            break; 
        case 9:
            covariance();
            break;
        case 10:
            perason_correlation();
            break; 
        case 11:
            linear_correlation_coefficient();
            break; 
        case 12:
            population_correlation_coefficient();
            break;     
        case 13:
            sample_correlation_coefficient();
            break;                      
        case 14:
            regression();
            break; 
        case 15:
            history();
            break;      
        case 16:
            exit_prog();
            break;                                          
        default:
            break;
        }
    }
    return 0;
}
void arithematic_mean()
{
    printf("\033[1;31m %s\n","\tWhat is arthematic mean? \n");
    printf("\033[1;31m %s","\tIn statistics, the Arithmetic Mean (AM) or called average is the ratio of the sum of all observations to the total\n\tnumber of observations.");
    printf("\033[0m");
    printf("\033[1;35m");
    int i,n;
    double x[size];
    FILE *fp;
    fp = fopen("history.txt","a");
    // No. of observation
    printf("\nEnter the total number of observation: ");
    scanf("%d",&n);
    fprintf(fp,"\n");
    // Input elements
    printf("\nEnter elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    }
     // Procedure
    int sum = 0;
    double mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    mean = sum / n;
    printf("\033[1;31m %s","\n  Arithmatic mean  = ");
    printf("%.2lf", mean);
    printf("\033[0m");
    fprintf(fp,"\nArithematic mean = %.2lf",mean);
    fclose(fp);
}

void geometric_mean()
{
    printf("\033[1;31m %s\n","\tWhat is geometric mean? \n");
    printf("\033[1;31m %s","\tIn Mathematics, the Geometric Mean (GM) is the average value or mean which signifies the central tendency of the set of numbers\n\tby finding the product of their values. Basically, we multiply the numbers altogether and take the nth root of the\n\tmultiplied numbers,where n is the total number of data values.");
    printf("\033[0m");
    printf("\033[1;35m");
    int n;
    double x[size];
    FILE *fp;
    fp = fopen("history.txt","a");
    // No. of observation
    printf("\nEnter the total number of observation ");
    scanf("%d",&n);
    fprintf(fp,"\n");
    // Input elements
    printf("\nEnter elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    }
    // Procedure
    double geometric = 1.0; 
    for(int i = 0; i < n; i++)
    {
        geometric = geometric * x[i];
    }

    double new_geometric = pow(geometric,(double)1/n);
    printf("\033[1;31m %s","\n Geometric mean  = ");
    printf("%.2lf", new_geometric);
    printf("\033[0m");
    fprintf(fp,"\nGeometric mean  =  %.2lf",new_geometric);
    fclose(fp);
}
void harmonic_mean()
{
    printf("\033[1;31m %s\n","\tWhat is harmonic mean? \n");
    printf("\033[1;31m %s","\tThe Harmonic Mean (HM) is defined as the reciprocal of the average of the reciprocals of the data values.It is based on all the\n\tobservations,and it is rigidly defined");
    printf("\033[0m");
    printf("\033[1;35m");
    double x[size],reciprocal[size],sum = 0;
    int n,n1;
    // No. of observation
    printf("\nEnter the total number of elements: ");
    scanf("%d",&n);
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    // Input elements
    printf("\nEnter elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    }
    // Procedure
    for(int i = 0; i < n; i++)
    {
        reciprocal[i] = 1 / x[i];
        sum = sum + reciprocal[i];
    }
    double harmonic_final = n / sum;
    printf("\033[1;31m %s","\n Harmonic mean  = ");
    printf("%.2lf", harmonic_final);
    printf("\033[0m");
    fprintf(fp,"\nHarmonic mean  =   %.2lf",harmonic_final);
    fclose(fp);
}
void range()
{
    printf("\033[1;31m %s\n","\tWhat is range? \n");
    printf("\033[1;31m %s","\tThe range in statistics for a given data set is the difference between the highest and lowest values.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    unsigned int x[size];
    int i,n;
    // No. of elements
    printf("\nEnter the total number of observation: ");
    scanf("%d",&n);
    // Input elements
    printf("\nEnter elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    }
    // Find maximum and minimum number in array of x[size]
    int max = x[0],min = x[0];
    for(int i = 0; i < n; i++)
    {
         if(x[i] > max)
        {
            max = x[i];
        }
        else if(x[i] < min)
        {
            min = x[i];
        }
    }
    // printf("\nMaximum no is %d",max);
    // printf("\nMinimum no is %d",min);
    // find range
    unsigned int range = max - min;
    printf("\033[1;31m %s","\n Range = ");
    printf("%.2lf", range);
    printf("\033[0m");
    fprintf(fp,"\nRange =  %.2lf",range);
    fclose(fp);
}
void mode()
{
    printf("\033[1;31m %s\n","\tWhat is mode? \n");
    printf("\033[1;31m %s","\tIn statistics, the mode is the value that is repeatedly occurring in a given set. We can also say that the value or number in a\n\tdata set,which has a high frequency or appears more frequently, is called mode or modal value.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    double x[size];
    int i,n;
    // No. of elements
    printf("\nEnter total number of observation: ");
    scanf("%d",&n);
    // Input elements
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter elements: \n");
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    }
    int maxCount = 0,j;
    double maxValue = 0.0;
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (x[j] == x[i])
            ++count;
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxValue = x[i];
        }
    }
    printf("\033[1;31m %s","\n Mode = ");
    printf("%.2lf", maxValue);
    printf("\033[0m");  
    fprintf(fp,"\nMode = %.2lf",maxValue);
    fclose(fp); 
}
void median()
{
    printf("\033[1;31m %s\n","\tWhat is median? \n");
    printf("\033[1;31m %s","\tMedian, in statistics, is the middle value of the given list of data when arranged in an order. The arrangement of data or\n\tobservations can be made either in ascending order or descending order.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    double x[size];
    int i,n;
    // No. of elements
    printf("\nEnter the total number of observation: ");
    scanf("%d",&n);
    // Input elements
    printf("\nEnter elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    }
    // Sort the array
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {    
            int temp = 0;
            if(x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    printf("\n");
    // Printing sorted array
    double y[size];
    printf("In ascending order: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%.1lf  ",x[i]);
        y[i] = x[i];
    }
    // Median
    double median;
    if(n % 2 == 0)
    {
        median = (y[(n - 1)/ 2] + y[n / 2]) / 2.0;
        printf("\033[1;31m %s","\n Median = ");
        printf("%.2lf", median);
        printf("\033[0m"); 
        fprintf(fp,"\nMedian = %.2lf",median);   
    }
    else
    {
        median = (y[n / 2]);
        printf("\033[1;31m %s","\n Median = ");
        printf("%.2lf", median);
        printf("\033[0m"); 
        fprintf(fp,"\nMedian = %.2lf",median); 
    }
    fclose(fp); 
}
void standared_deviation()
{

    printf("\033[1;31m %s\n","\tWhat is standared deviation? \n");
    printf("\033[1;31m %s","\tStandard deviation formula is used to find the values of a particular data that is dispersed. In simple words, the standard\n\tdeviation is defined as the deviation of the values or data from an average mean. Lower standard deviation concludes that\n\tthe values are very close to their average.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    int i,n;
    double x[size];
    // No. of observation
    printf("\nEnter the total number of observation: ");
    scanf("%d",&n);
    // Input elements
    printf("\nEnter elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    }
     // Arimatic mean
    int sum = 0;
    double mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    mean = sum / n;
    // Standared Deviation
    double sum1 = 0,sum2 = 0; int power;
    for(int i = 0; i < n; i++)
    {
        sum1 = (x[i] - mean);
        power = 1;
        for(int i = 1; i < 3; i++)
        {
            power = power * sum1;
        }
        sum2 = sum2 + power;
    }
    double std_dev = sum2 / (n);
    double std_dev_org = sqrt(std_dev);
    printf("\033[1;31m %s","\n Standared deviation = ");
    printf("%.2lf", std_dev_org);
    printf("\033[0m"); 
    fprintf(fp,"\nStandared deviation = %.2lf",std_dev_org);
    fclose(fp);
}
void variance()
{
    printf("\033[1;31m %s\n","\tWhat is Variance? \n");
    printf("\033[1;31m %s","\tVariance is the expected value of the squared variation of a random variable from its mean value, in probability and\n\tstatistics. Informally, variance estimates how far a set of numbers (random) are spread out from their mean value.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    int i,n;
    double x[size];
    // No. of observation
    printf("\nEnter the total number of observation: ");
    scanf("%d",&n);
    // Input elements
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter elements: \n");
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    }
     // Arimatic mean
    int sum = 0;
    double mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    mean = sum / n;
    // variance 
    double sum1 = 0,sum2 = 0; int power;
    for(int i = 0; i < n; i++)
    {
        sum1 = (x[i] - mean);
        power = 1;
        for(int i = 1; i < 3; i++)
        {
            power = power * sum1;
        }
        sum2 = sum2 + power;
    }
    double variance = (sum2 / (n)) ;
    printf("\033[1;31m %s","\n Variance = ");
    printf("%.2lf", variance);
    printf("\033[0m");
    fprintf(fp,"\n Variance = %.2lf",variance);
    fclose(fp);  
}
void covariance()
{
    printf("\033[1;31m %s\n","\tWhat is Covariance? \n");
    printf("\033[1;31m %s","\tIn simple words, covariance is one of the statistical measurement to know the relationship of the variance between the two\n\tvariables.The covariance indicates how two variables are related and also helps to know whether the two variables vary together\n\tor change together.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    double x[size],y[size];
    int n,n1;
    // No. of observation
    printf("\nEnter the total number of elements: ");
    scanf("%d",&n);
    // Input elements
    printf("\nEnter 1st array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    } 
    fprintf(fp,"\n");
    printf("\nEnter 2nd array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&y[i]);
        fprintf(fp,"%.2lf  ",y[i]);
    } 
    // Arithematic mean of x
    int sum = 0;
    double x_mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    x_mean = sum / n;
     // Arithematic mean of y
    int sum2 = 0;
    double y_mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum2 = sum2 + y[i];
    }
    y_mean = sum2/ n;
    // Covariance
    int sum3 = 0;
    for(int i = 0; i < n; i++)
    {
        sum3 = sum3 + ((x[i] - x_mean) * (y[i] - y_mean));
    }
    double covariance = sum3 / (n);
    printf("\033[1;31m %s","\n Covariance = ");
    printf("%.2lf", covariance);
    printf("\033[0m"); 
    fprintf(fp,"\n Covariance = %.2lf ",covariance);
    fclose(fp); 
} 
void perason_correlation()
{
    printf("\033[1;31m %s\n","\tWhat is Pearson_correlation? \n");
    printf("\033[1;31m %s","\tThe correlation coefficient is the measurement of correlation. The linear dependency between the data set is done by the\n\tPearson Correlation coefficient. It is also known as the Pearson product-moment correlation coefficient.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    double x[size],y[size];
    int n,n1;
    // No. of observation
    printf("\nEnter the total number of elements: ");
    scanf("%d",&n);
    // Input elements
    printf("\nEnter 1st array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    } 
    fprintf(fp,"\n");
    printf("\nEnter 2nd array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&y[i]);
        fprintf(fp,"%.2lf  ",y[i]);
    }
    // Upper part
    // Addition of x array
    double sum1 = 0.0, sum2 = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum1 = sum1 + x[i];
    } 
    // Addition of y array
    for(int i = 0; i < n; i++)
    {
        sum2 = sum2 + y[i];
    } 
    double multiply1 = sum1 * sum2;
    // Multiply and add x & y array
    double sum3 = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum3 = sum3 + (x[i] * y[i]);
    }
    double multiply2 = n *sum3;
    double upper_prt = multiply2 - multiply1;
    // lower part 
    double sum4 = 0.0,sum5 = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum4 = sum4 + (x[i] * x[i]);
        sum5 = sum5 + (y[i] * y[i]);
    } 
    double multiply3 = n * sum4;
    double multiply4 = n * sum5;
    double bracket1 = multiply3 - (sum1 * sum1);
    double bracket2 = multiply4 - (sum2 * sum2);
    double lower_prt = sqrt(bracket1 * bracket2);
    double correlation = upper_prt / lower_prt;
    printf("\033[1;31m %s","\n Pearson Correlation = ");
    printf("%.2lf", correlation);
    printf("\033[0m");
    fprintf(fp,"\n Pearson Correlation = %.2lf ",correlation);
    fclose(fp); 
}
void linear_correlation_coefficient()
{
    printf("\033[1;31m %s\n","\tWhat is Linear correlation? \n");
    printf("\033[1;31m %s","\tThe linear correlation coefficient defines the degree of relation between two variables and is denoted by r. It is\n\talso called as Cross correlation coefficient as it predicts the relation between two quantities.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    double x[size],y[size];
    int n,n1;
    // No. of observation
    printf("\nEnter the total number of elements: ");
    scanf("%d",&n);
    // Input elements
    printf("\nEnter 1st array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    } 
    fprintf(fp,"\n");
    printf("\nEnter 2nd array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&y[i]);
        fprintf(fp,"%.2lf  ",y[i]);
    }
    // Upper part
    // Addition of x array
    double sum1 = 0.0, sum2 = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum1 = sum1 + x[i];
    } 
    // Addition of y array
    for(int i = 0; i < n; i++)
    {
        sum2 = sum2 + y[i];
    } 
    double multiply1 = sum1 * sum2;
    // Multiply and add x & y array
    double sum3 = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum3 = sum3 + (x[i] * y[i]);
    }
    double multiply2 = n *sum3;
    double upper_prt = multiply2 - multiply1;
    // lower part 
    double sum4 = 0.0,sum5 = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum4 = sum4 + (x[i] * x[i]);
        sum5 = sum5 + (y[i] * y[i]);
    } 
    double multiply3 = n * sum4;
    double multiply4 = n * sum5;
    double bracket1 = multiply3 - (sum1 * sum1);
    double bracket2 = sqrt(multiply4 - (sum2 * sum2));
    double lower_prt = sqrt(bracket1 * bracket2);
    double linear_correlation_coefficient = upper_prt / lower_prt;
    printf("\033[1;31m %s","\n Linear Correlation Coefficient = ");
    printf("%.2lf", linear_correlation_coefficient);
    printf("\033[0m");
    fprintf(fp,"\nLinear Correlation Coefficient = %.2lf ",linear_correlation_coefficient);
    fclose(fp); 
}
void population_correlation_coefficient()
{
    printf("\033[1;31m %s\n","\tWhat is Papulation correlation? \n");
    printf("\033[1;31m %s","\tThe population correlation coefficient uses the population covariance between variables and their population standard\n\tdeviations.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    double x[size],y[size];
    int n,n1;
    // No. of observation
    printf("\nEnter the total number of elements: ");
    scanf("%d",&n);
    // Input elements
    printf("\nEnter 1st array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    } 
    fprintf(fp,"\n");
    printf("\nEnter 2nd array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&y[i]);
        fprintf(fp,"%.2lf  ",y[i]);
    }
    // standared deviation of x array
    // Arimatic mean
    int sum = 0;
    double mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    mean = sum / n;
    // Standared Deviation of x array
    double sum1 = 0,sum2 = 0; int power;
    for(int i = 0; i < n; i++)
    {
        sum1 = (x[i] - mean);
        power = 1;
        for(int i = 1; i < 3; i++)
        {
            power = power * sum1;
        }
        sum2 = sum2 + power;
    }
    double std_dev = sum2 / (n);
    double std_dev_org_x = sqrt(std_dev);
    // printf("\nStandared deviation = %.2lf",std_dev_org_x);
    // standared deviation of y array
    // Arimatic mean
    int sum3 = 0;
    double mean2 = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum3 = sum3 + y[i];
    }
    mean2 = sum3 / n;
    // Standared Deviation of y array
    double sum4 = 0,sum5 = 0; int power2;
    for(int i = 0; i < n; i++)
    {
        sum4 = (x[i] - mean2);
        power2 = 1;
        for(int i = 1; i < 3; i++)
        {
            power2 = power2 * sum4;
        }
        sum5 = sum5 + power2;
    }
    double std_dev2 = sum5 / (n);
    double std_dev_org_y = sqrt(std_dev2);
    // printf("\nStandared deviation = %.2lf",std_dev_org_y); 
    // Covariance
    // Arithematic mean of x
    int sum6 = 0;
    double x_mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum6 = sum6 + x[i];
    }
    x_mean = sum6 / n;
     // Arithematic mean of y
    int sum7 = 0;
    double y_mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum7 = sum7 + y[i];
    }
    y_mean = sum7/ n;
    // Covariance
    int sum8 = 0;
    for(int i = 0; i < n; i++)
    {
        sum8 = sum8 + ((x[i] - x_mean) * (y[i] - y_mean));
    }
    double covariance = sum8 / (n);
    // printf("\nCovariance = %.2lf",covariance);
    double popl_corr_coff = covariance / (std_dev_org_x * std_dev_org_y);
    printf("\033[1;31m %s","\n Population Correlation Coefficient = ");
    printf("%.2lf", popl_corr_coff);
    printf("\033[0m");
    fprintf(fp,"\n Population Correlation Coefficient = %.2lf ",popl_corr_coff);
    fclose(fp); 
}
void sample_correlation_coefficient()
{
    printf("\033[1;31m %s\n","\tWhat is Sample correlation? \n");
    printf("\033[1;31m %s","\tIn statistics, correlation is a statistic that establishes the relationship between two variables. In other words, it is the\n\tmeasure of association of variables.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    double x[size],y[size];
    int n,n1;
    // No. of observation
    printf("\nEnter the total number of elements: ");
    scanf("%d",&n);
    // Input elements
    printf("\nEnter 1st array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    } 
    fprintf(fp,"\n");
    printf("\nEnter 2nd array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&y[i]);
        fprintf(fp,"%.2lf  ",y[i]);
    }
    // standared deviation of x array
    // Arimatic mean
    int sum = 0;
    double mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    mean = sum / n;
    // Standared Deviation of x array
    double sum1 = 0,sum2 = 0; int power;
    for(int i = 0; i < n; i++)
    {
        sum1 = (x[i] - mean);
        power = 1;
        for(int i = 1; i < 3; i++)
        {
            power = power * sum1;
        }
        sum2 = sum2 + power;
    }
    double std_dev = sum2 / (n - 1);
    double std_dev_org_x = sqrt(std_dev);
    // printf("\nStandared deviation = %.2lf",std_dev_org_x);
    // standared deviation of y array
    // Arimatic mean
    int sum3 = 0;
    double mean2 = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum3 = sum3 + y[i];
    }
    mean2 = sum3 / n;
    // Standared Deviation of y array
    double sum4 = 0,sum5 = 0; int power2;
    for(int i = 0; i < n; i++)
    {
        sum4 = (x[i] - mean2);
        power2 = 1;
        for(int i = 1; i < 3; i++)
        {
            power2 = power2 * sum4;
        }
        sum5 = sum5 + power2;
    }
    double std_dev2 = sum5 / (n - 1);
    double std_dev_org_y = sqrt(std_dev2);
    // printf("\nStandared deviation = %.2lf",std_dev_org_y); 
    // Covariance
    // Arithematic mean of x
    int sum6 = 0;
    double x_mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum6 = sum6 + x[i];
    }
    x_mean = sum6 / n;
     // Arithematic mean of y
    int sum7 = 0;
    double y_mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum7 = sum7 + y[i];
    }
    y_mean = sum7/ n;
    // Covariance
    int sum8 = 0;
    for(int i = 0; i < n; i++)
    {
        sum8 = sum8 + ((x[i] - x_mean) * (y[i] - y_mean));
    }
    double covariance = sum8 / (n);
    // printf("\nCovariance = %.2lf",covariance);
    double sample_corr_coff = covariance / (std_dev_org_x * std_dev_org_y);
    printf("\033[1;31m %s","\n Sample Correlation Coefficient = ");
    printf("%.2lf", sample_corr_coff);
    printf("\033[0m");
    fprintf(fp,"\n Sample Correlation Coefficient = %.2lf ",sample_corr_coff);
    fclose(fp); 
}
void regression()
{
    printf("\033[1;31m %s\n","\tWhat is regression? \n");
    printf("\033[1;31m %s","\tLinear regression strives to show the relationship between two variables by applying a linear equation to observed data.\n\tOne variable is supposed to be an independent variable, and the other is to be a dependent variable.");
    printf("\033[0m");
    printf("\033[1;35m");
    FILE *fp;
    fp = fopen("history.txt","a");
    fprintf(fp,"\n");
    double x[size],y[size];
    int n,n1;
    // No. of observation
    printf("\nEnter the total number of elements: ");
    scanf("%d",&n);
    // Input elements
    printf("\nEnter 1st array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&x[i]);
        fprintf(fp,"%.2lf  ",x[i]);
    } 
    printf("\nEnter 2nd array (variable) elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&y[i]);
        fprintf(fp,"%.2lf  ",y[i]);
    } 
    // For a
    // sum of x
    int sum = 0;
    double x_mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    // Sum of y
    int sum2 = 0;
    double y_mean = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum2 = sum2 + y[i];
    }
    // Sum of x and y (square)
    double sqrt_sum_x = 0.0;
    for(int i = 0; i < n; i++)
    {
        sqrt_sum_x = sqrt_sum_x + (x[i] * x[i]);
    }
    double sqrt_sum_y = 0.0;
    for(int i = 0; i < n; i++)
    {
        sqrt_sum_y = sqrt_sum_y + (y[i] * y[i]);
    }
    // Multiply and add x & y
    double sum3 = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum3 = sum3 + (x[i] * y[i]);
    }
    double upper_prt = (sum2 * sqrt_sum_x) - (sum * sum3);
    double lower_prt = (n * sqrt_sum_x) - (sum * sum); 
    double a = upper_prt / lower_prt;
    // For b
    double upper_prt2 = (n * sum3) - ((sum) * (sum2));
    double lower_prt2 = (n * sqrt_sum_x) - (sqrt_sum_x);
    double b = upper_prt2 / lower_prt2;
    double regression = a + b;
    printf("\033[0;35m");
    printf("\033[1;31m %s","\n Regression = ");
    printf("%.2lf", regression);
    printf("\033[0m");
    fprintf(fp,"\n Regression = %.2lf ",regression);
    fclose(fp); 
}
void history()
{
    printf("\033[0;39m");
    FILE *fp;
    fp = fopen("history.txt","r");
    printf("\n");
    char ch;
    for(int i = 0; ch != EOF; i++)
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    printf("\033[0;35m");
}
void exit_prog()
{
    printf("\033[1;31m %s","\nYour program is successfully compeleted");
    printf("\033[1;31m %s","\nThe END");
    printf("\033[0m");
}