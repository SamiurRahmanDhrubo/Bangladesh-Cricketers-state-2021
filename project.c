#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("\t\t\t\t\t\t-------------------------");
    printf("\n\t\t\t\t\t\t|\t Welcome\t|\n");
    printf("\t\t\t\t\t\t-------------------------\n");
    printf("You will get all necessary information about Bangladeshi cricketers in 3 formats.\nYou can also give some information about players of 3 formats. Your given information must be about their played matches which has took placed after 1st April. Last update on 1st April.\n\n\n");
    printf("Main Menu:\n");
    printf("----------\n");
    printf("\n1.Test players.\n2.ODI players.\n3.T-20I players.\n4.Exit.");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        Test_players();
        break;
    case 2:
        ODI_players();
        break;
    case 3:
        T20_players();
        break;
    case 4:
        exit(0);
    default:
        printf("\n\t\t\t\t\tYOU HAVE ENTERED WRONG INPUT. TRY AGAIN!\n");
        main();
        break;
    }
}

void Test_players()
{
    int n;
    printf("\n\n\t\t\t\t\t\t Test players\n\t\t\t\t\t\t--------------\n");
    printf("1.Batsman\n2.All-rounder\n3.Bowler\n4.Main Menu\n5.Exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        Test_Batsman();
        break;
    case 2:
        Test_Allrounder();
        break;
    case 3:
        Test_Bowler();
        break;
    case 4:
        main();
        break;
    case 5:
        exit(0);
        break;
    }
}

void Test_Batsman()
{
    int n;
    printf("\n\n\t\t\t\t\t\t Batsman\n\t\t\t\t\t\t---------\n");
    printf("1.Tamim Iqbal\n2.Shadman Islam\n3.Saif Hasan\n4.Imrul Kayes\n5.Soumya Sarkar\n6.Mominul Haque\n7.Mushfiqur Rahim\n8.Mohammad Mithun\n9.Liton Das\n10.Nazmul Hossen Shanto\n11.Yasir Ali\n12.Main Menu\n13.Exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        test_tamim();
        break;
    case 2:
        test_shadman();
        break;
    case 3:
        test_saif();
        break;
    case 4:
        test_imrul();
        break;
    case 5:
        test_soumya();
        break;
    case 6:
        test_mominul();
        break;
    case 7:
        test_mushfiq();
        break;
    case 8:
        test_mithun();
        break;
    case 9:
        test_liton();
        break;
    case 10:
        test_shanto();
        break;
    case 11:
        test_yasir();
        break;
    case 12:
        main();
        break;
    case 13:
        exit(0);
        break;
    }
}

void Test_Allrounder()
{
    int n;
    printf("\n\n\t\t\t\t\t\t All-rounder\n\t\t\t\t\t\t------------\n");
    printf("1.Shakib Al Hasan\n2.Md. Mahmudullah Riyad\n3.Mehedi Hasan Miraj\n4.Mosaddek Hossain Saikot\n5.Main Menu\n6.Exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        test_shakib();
        break;
    case 2:
        test_riad();
        break;
    case 3:
        test_miraj();
        break;
    case 4:
        test_saikot();
        break;
    case 5:
        main();
        break;
    case 6:
        exit(0);
        break;
    }
}

void Test_Bowler()
{
    int n;
    printf("\n\n\t\t\t\t\t\t Bowler\n\t\t\t\t\t\t--------\n");
    printf("1.Mustafizur Rahman\n2.Abu Jayed Rahi\n3.Ibadot Hossain\n4.Shafiul Islam\n5.Al-Amin Hossen\n6.Taskin Ahmed\n7.Taijul Islam\n8. Nayeem Hasan\n9.Rubel Hossain\n10.Hasan Mahmud\n11.Main Menu\n12.Exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        test_mustafiz();
        break;
    case 2:
        test_rahi();
        break;
    case 3:
        test_ibadot();
        break;
    case 4:
        test_shafiul();
        break;
    case 5:
        test_al_amin();
        break;
    case 6:
        test_taskin();
        break;
    case 7:
        test_taijul();
        break;
    case 8:
        test_nayeem();
        break;
    case 9:
        test_rubel();
        break;
    case 10:
        test_h_mahmud();
        break;
    case 11:
        main();
        break;
    case 12:
        exit(0);
        break;
    }
}

void ODI_players()
{
    int n;
    printf("\n\n\t\t\t\t\t\t ODI players\n\t\t\t\t\t\t-------------\n");
    printf("1.Batsman\n2.All-rounder\n3.Bowler\n4.Main Menu\n5.Exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        ODI_Batsman();
        break;
    case 2:
        ODI_Allrounder();
        break;
    case 3:
        ODI_Bowler();
        break;
    case 4:
        main();
        break;
    case 5:
        exit(0);
        break;
        }
}

void ODI_Batsman()
{
    int n;
    printf("\n\n\t\t\t\t\t\t Batsman\n\t\t\t\t\t\t---------\n");
    printf("1.Tamim Iqbal\n2.Liton Das\n3.Soumya Sarkar\n4.Mohammad Naim Sheikh\n5.Mushfiqur Rahim\n6.Najmul Hossain Shanto\n7.Mohammad Mithun\n8.Sabbir Rahman\n9.Main Menu\n10.Exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        odi_tamim();
        break;
    case 2:
        odi_liton();
        break;
    case 3:
        odi_soumya();
        break;
    case 4:
        odi_naim();
        break;
    case 5:
        odi_mushfiq();
        break;
    case 6:
        odi_shanto();
        break;
    case 7:
        odi_mithun();
        break;
    case 8:
        odi_sabbir();
        break;
    case 9:
        main();
        break;
    case 10:
        exit(0);
        break;
    }
}

void ODI_Allrounder()
{
    int n;
    printf("\n\n\t\t\t\t\t\t All-rounder\n\t\t\t\t\t\t------------\n");
    printf("1.Shakib Al Hasan\n2.Mohammad Mahmudullah Riyad\n3.Mehidy Hasan Miraz\n4.Afif Hossain Dhrubo\n5.Mosaddek Hossain Saikat\n6.Mohammad Saifuddin\n7.Sheikh Mahedi Hasan\n8.Main Menu\n9.Exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        odi_shakib();
        break;
    case 2:
        odi_riad();
        break;
    case 3:
        odi_miraz();
        break;
    case 4:
        odi_afif();
        break;
    case 5:
        odi_saikot();
        break;
    case 6:
        odi_saifuddin();
        break;
    case 7:
        odi_mahidy();
        break;
    case 8:
        main();
        break;
    case 9:
        exit(0);
        break;
    }
}

void ODI_Bowler()
{
    int n;
    printf("\n\n\t\t\t\t\t\t Bowler\n\t\t\t\t\t\t--------\n");
    printf("1.Mustafizur Rahman\n2.Mashrafee Bin Mortaza\n3.Rubel Hossain\n4.Shafiul Islam\n5.Al-Amin Hossen\n6.Taskin Ahmed\n7.Taijul Islam\n8.Abu Jayed Rahi\n9.Shoriful Islam\n10.Hasan Mahmud\n11.Main Menu\n12.Exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        odi_mustafiz();
        break;
    case 2:
        odi_mashrafee();
        break;
    case 3:
        odi_rubel();
        break;
    case 4:
        odi_shafiul();
        break;
    case 5:
        odi_al_amin();
        break;
    case 6:
        odi_taskin();
        break;
    case 7:
        odi_taijul();
        break;
    case 8:
        odi_rahi();
        break;
    case 9:
        odi_shoriful();
        break;
    case 10:
        odi_h_mahmud();
        break;
    case 11:
        main();
        break;
    case 12:
        exit(0);
        break;
    }
}

void T20_players()
{
    int n;
    printf("\n\n\t\t\t\t\t\t T20 players\n\t\t\t\t\t\t--------------\n");
    printf("1.Batsman\n2.All-rounder\n3.Bowler\n4.Main Menu\n5.Exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        T20_Batsman();
        break;
    case 2:
        T20_Allrounder();
        break;
    case 3:
        T20_Bowler();
        break;
    case 4:
        main();
        break;
    case 5:
        exit(0);
        break;
    }
}

void T20_Batsman()
{
    int n;
    printf("\n\n\t\t\t\t\t\t Batsman\n\t\t\t\t\t\t---------\n");
    printf("1.Tamim Iqbal\n2.Liton Das\n3.Soumya Sarkar\n4.Mohammad Naim Sheikh\n5.Mushfiqur Rahim\n6.Najmul Hossain Shanto\n7.Mohammad Mithun\n8.Sabbir Rahman\n9.main\n10.exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        t20_tamim();
        break;
    case 2:
        t20_liton();
        break;
    case 3:
        t20_soumya();
        break;
    case 4:
        t20_naim();
        break;
    case 5:
        t20_mushfiq();
        break;
    case 6:
        t20_shanto();
        break;
    case 7:
        t20_mithun();
        break;
    case 8:
        t20_sabbir();
        break;
    case 9:
        main();
        break;
    case 10:
        exit(0);
        break;
    }
}

void T20_Allrounder()
{
    int n;
    printf("\n\n\t\t\t\t\t\t All-rounder\n\t\t\t\t\t\t------------\n");
    printf("1.Shakib Al Hasan\n2.Md.Mahmudullah Riad\n3.Mehedi Hasan Miraj\n4.Mosaddek Hossain Saikot\n5.Afif Hossain Dhrubo\n6.Sheikh Mahedi Hasan\n7.Mohammad Saifuddin\n8.Aminul Islam Biplob\n9.ariful haque\n10.main\n11.exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        t20_shakib();
        break;
    case 2:
        t20_riad();
        break;
    case 3:
        t20_miraj();
        break;
    case 4:
        t20_saikot();
        break;
    case 5:
        t20_afif();
        break;
    case 6:
        t20_mahedi();
        break;
    case 7:
        t20_saifuddin();
        break;
    case 8:
        t20_biplob();
        break;
    case 9:
        t20_ariful();
        break;
    case 10:
        main();
        break;
    case 11:
        exit(0);
        break;
    }
}

void T20_Bowler()
{
    int n;
    printf("\n\n\t\t\t\t\t\t Bowler\n\t\t\t\t\t\t--------\n");
    printf("1.Mustafizur Rahman\n2.Nasum Ahmed\n3.Rubel Hossain\n4.Shafiul Islam\n5.Al-Amin Hossen\n6.Taskin Ahmed\n7.Hasan Mahmud\n8.Shoriful Islam\n9.main\n10.exit\n");
    printf("\n\n\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        t20_mustafiz();
        break;
    case 2:
        t20_nasum();
        break;
    case 3:
        t20_rubel();
        break;
    case 4:
        t20_shafiul();
        break;
    case 5:
        t20_al_amin();
        break;
    case 6:
        t20_taskin();
        break;
    case 7:
        t20_h_mahmud();
        break;
    case 8:
        t20_shoriful();
        break;
    case 9:
        main();
        break;
    case 10:
        exit(0);
        break;
    }
}

void test_tamim()
{
    char c;
    FILE *tamim_test;
    tamim_test = fopen("tamim_test.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 62;
    Innings = 119;
    Not_Out = 1;
    Runs =4508;
    Ball_faced = 7915;
    Highest_Score =206;
    hundred = 9;
    fifty = 28;
    Bowl_Match = 62;
    Bowl_Innings = 2;
    Ball = 30;
    conceded_Runs = 20;
    Wickets = 0;
    Best_Wickets = 0;
    Best_Wickets_conceded_Runs = 1;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 17;
    Stumping = 0;
    Average = 38.20;
    Strike_Rate = 56.96;
    Economy = 4.00;
    Bowl_Average = 0.00;
    Bowl_Strike_Rate = 0.00;
    if (tamim_test == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Tamim Iqbal\n\n");
        fprintf(tamim_test,"\t\t\t\t\t\t     Tamim Iqbal\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: March 20, 1989\n\tAge: 32\n\tBirth Place: Chittagong\n\tRole: Opening Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",tamim_test);
        fprintf(tamim_test,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);
        fprintf(tamim_test,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/1\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);
        fprintf(tamim_test,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);
        fclose(tamim_test);
        tamim_test = fopen("tamim_test.txt","r");
        while(1)
        {
                        c = fgetc(tamim_test);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
}
        fscanf(tamim_test,"%s",&c);
        fclose(tamim_test);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;
        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *tamim_test;
            tamim_test = fopen("tamim_test.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;

            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (tamim_test == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Tamim Iqbal\n\n");
                fprintf(tamim_test,"\t\t\t\t\t\t     Tamim Iqbal\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: March 20, 1989\n\tAge: 32\n\tBirth Place: Chittagong\n\tRole: Opening Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",tamim_test);
                fprintf(tamim_test,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);
                fprintf(tamim_test,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);
                fprintf(tamim_test,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);
                fclose(tamim_test);
                tamim_test = fopen("tamim_test.txt","r");
                while(1)
                {
                    c = fgetc(tamim_test);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }
                fscanf(tamim_test,"%s",&c);
                fclose(tamim_test);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_shadman()
{
    char c;
    FILE *shadman_test;
    shadman_test = fopen("shadman_test.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 7;
    Innings = 13;
    Not_Out = 0;
    Runs = 339;
    Ball_faced = 818;
    Highest_Score =76;
    hundred = 0;
    fifty = 2;
    Bowl_Match = 7;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 3;
    Stumping = 0;
    Average = 26.07;
    Strike_Rate = 41.44;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (shadman_test == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Shadman Islam\n\n");

        fprintf(shadman_test,"\t\t\t\t\t\t     Shadman Islam\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: May, 18, 1995\n\tAge: 25\n\tBirth Place: Dhaka\n\tRole: Opening Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Slow left arm orthodox\n\n",shadman_test);

        fprintf(shadman_test,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(shadman_test,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(shadman_test,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(shadman_test);
        shadman_test = fopen("shadman_test.txt","r");
        while(1)
        {

            c = fgetc(shadman_test);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(shadman_test,"%s",&c);
        fclose(shadman_test);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *shadman_test;
            shadman_test = fopen("shadman_test.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (shadman_test == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Shadman Islam\n\n");

                fprintf(shadman_test,"\t\t\t\t\t\t     Shadman Islam\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: May, 18, 1995\n\tAge: 25\n\tBirth Place: Dhaka\n\tRole: Opening Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Slow left arm orthodox\n\n",shadman_test);

                fprintf(shadman_test,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(shadman_test,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(shadman_test,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(shadman_test);
                shadman_test = fopen("shadman_test.txt","r");
                while(1)
                {
                    c = fgetc(shadman_test);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(shadman_test,"%s",&c);
                fclose(shadman_test);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_saif()
{
    char c;
    FILE *test_saif;
    test_saif = fopen("test_saif.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 2;
    Innings = 3;
    Not_Out = 0;
    Runs = 24;
    Ball_faced = 29;
    Highest_Score =16;
    hundred = 0;
    fifty = 0;
    Bowl_Match = 2;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 8.00;
    Strike_Rate = 61.23;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (test_saif == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Saif Hassan\n\n");

        fprintf(test_saif,"\t\t\t\t\t\t     Saif Hassan\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: October 30, 1998\n\tAge: 22\n\tBirth Place: Dhaka\n\tRole: Top-order Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right arm ofbreak\n\n",test_saif);

        fprintf(test_saif,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_saif,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_saif,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_saif);
        test_saif = fopen("test_saif.txt","r");
        while(1)
        {
            c = fgetc(test_saif);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_saif,"%s",&c);
        fclose(test_saif);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;

        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);

        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);

        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);

        printf("\n\tBall: ");
        scanf("%d",&N_Ball);

        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);

        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);

        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);

        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);

        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);

        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);

        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_saif;
            test_saif = fopen("test_saif.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;

            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_saif == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Saif Hassan\n\n");

                fprintf(test_saif,"\t\t\t\t\t\t     Saif Hassan\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: October 30, 1998\n\tAge: 22\n\tBirth Place: Dhaka\n\tRole: Opening Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Slow right-arm offbreak\n\n",test_saif);

                fprintf(test_saif,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_saif,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_saif,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_saif);
                test_saif = fopen("test_saif.txt","r");
                while(1)
                {
                    c = fgetc(test_saif);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_saif,"%s",&c);
                fclose(test_saif);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}




void test_imrul()
{
    char c;
    FILE *test_imrul;
    test_imrul = fopen("test_imrul.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 39;
    Innings = 76;
    Not_Out = 2;
    Runs = 1797;
    Ball_faced = 3749;
    Highest_Score =150;
    hundred = 3;
    fifty = 4;
    Bowl_Match = 39;
    Bowl_Innings = 4;
    Ball = 24;
    conceded_Runs = 12;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 35;
    Stumping = 0;
    Average = 24.28;
    Strike_Rate = 48.02;
    Economy = 3.00;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (test_imrul == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Imrul Kayes\n\n");

        fprintf(test_imrul,"\t\t\t\t\t\t     Imrul Kayes\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 2, 1987\n\tAge: 34\n\tBirth Place: Khulna\n\tRole: Opening Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",test_imrul);

        fprintf(test_imrul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_imrul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/1\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_imrul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_imrul);
        test_imrul = fopen("test_imrul.txt","r");
        while(1)
        {
            c = fgetc(test_imrul);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_imrul,"%s",&c);
        fclose(test_imrul);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);

        printf("\n\tBall: ");
        scanf("%d",&N_Ball);

        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);

        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);

        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);

        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);

        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);

        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);

        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_imrul;
            test_imrul = fopen("test_imrul.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;

            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;

            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_imrul == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Imrul Kayes\n\n");

                fprintf(test_imrul,"\t\t\t\t\t\t     Imrul Kayes\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 2, 1987\n\tAge: 34\n\tBirth Place: Khulna\n\tRole: Opening Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",test_imrul);

                fprintf(test_imrul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_imrul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_imrul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_imrul);
                test_imrul = fopen("test_imrul.txt","r");
                while(1)
                {

                    c = fgetc(test_imrul);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);

                }

                fscanf(test_imrul,"%s",&c);
                fclose(test_imrul);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_soumya()
{
    char c;
    FILE *test_soumya;
    test_soumya = fopen("test_soumya.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 16;
    Innings = 30;
    Not_Out = 0;
    Runs = 831;
    Ball_faced = 1442;
    Highest_Score =149;
    hundred = 1;
    fifty = 4;
    Bowl_Match = 16;
    Bowl_Innings = 12;
    Ball = 508;
    conceded_Runs = 336;
    Wickets = 4;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 23;
    Stumping = 0;
    Average = 27.70;
    Strike_Rate = 57.62;
    Economy = 3.96;
    Bowl_Average = 84.00;
    Bowl_Strike_Rate = 127.0;
    if (test_soumya == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Soumya Sarkar\n\n");

        fprintf(test_soumya,"\t\t\t\t\t\t     Soumya Sarkar\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: February 25, 1992\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm Medium-fast\n\n",test_soumya);

        fprintf(test_soumya,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_soumya,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/68\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_soumya,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_soumya);
        test_soumya = fopen("test_soumya.txt","r");
        while(1)
        {
            c = fgetc(test_soumya);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_soumya,"%s",&c);
        fclose(test_soumya);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_soumya;
            test_soumya = fopen("test_soumya.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;

            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_soumya == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Soumya Sarkar\n\n");

                fprintf(test_soumya,"\t\t\t\t\t\t     Soumya Sarkar\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: February 25, 1992\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm Medium-fast\n\n",test_soumya);

                fprintf(test_soumya,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_soumya,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_soumya,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_soumya);
                test_soumya = fopen("test_soumya.txt","r");
                while(1)
                {
                    c = fgetc(test_soumya);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);

                }

                fscanf(test_soumya,"%s",&c);
                fclose(test_soumya);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}


void test_mominul()
{
    char c;
    FILE *test_mominul;
    test_mominul = fopen("test_mominul.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 42;
    Innings = 78;
    Not_Out = 4;
    Runs = 3048;
    Ball_faced = 5490;
    Highest_Score =181;
    hundred = 10;
    fifty = 13;
    Bowl_Match = 42;
    Bowl_Innings = 27;
    Ball = 601;
    conceded_Runs = 376;
    Wickets = 4;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 29;
    Stumping = 0;
    Average = 41.18;
    Strike_Rate = 55.51;
    Economy = 3.75;
    Bowl_Average = 94.00;
    Bowl_Strike_Rate = 150.2;
    if (test_mominul == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mominul Haque\n\n");

        fprintf(test_mominul,"\t\t\t\t\t\t     Mominul Haque\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: September 29, 1991\n\tAge: 29\n\tBirth Place: Cox's Bazar\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",test_mominul);

        fprintf(test_mominul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_mominul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/42\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_mominul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_mominul);
        test_mominul = fopen("test_mominul.txt","r");
        while(1)
        {
            c = fgetc(test_mominul);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_mominul,"%s",&c);
        fclose(test_mominul);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;

        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);

        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);

        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);

        printf("\n\tBall: ");
        scanf("%d",&N_Ball);

        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);

        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);

        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);

        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);

        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);

        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);

        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_mominul;
            test_mominul = fopen("test_mominul.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;

            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_mominul == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mominul Haque\n\n");

                fprintf(test_mominul,"\t\t\t\t\t\t     Mominul Haque\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: September 29, 1991\n\tAge: 29\n\tBirth Place: Cox's Bazar\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",test_mominul);

                fprintf(test_mominul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_mominul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_mominul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_mominul);
                test_mominul = fopen("test_mominul.txt","r");
                while(1)
                {
                    c = fgetc(test_mominul);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }
                fscanf(test_mominul,"%s",&c);
                fclose(test_mominul);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_mushfiq()
{
    char c;
    FILE *test_mushfiq;
    test_mushfiq = fopen("test_mushfiq.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 72;
    Innings = 134;
    Not_Out = 12;
    Runs = 4537;
    Ball_faced = 9492;
    Highest_Score =219;
    hundred = 7;
    fifty = 22;
    Bowl_Match = 72;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 106;
    Stumping = 15;
    Average = 36.58;
    Strike_Rate = 47.79;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (test_mushfiq == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mushfiqur Rahim\n\n");

        fprintf(test_mushfiq,"\t\t\t\t\t\t     Mushfiqur Rahim\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: May 09, 1987\n\tAge: 33\n\tBirth Place: Bogra\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",test_mushfiq);

        fprintf(test_mushfiq,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_mushfiq,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_mushfiq,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_mushfiq);
        test_mushfiq = fopen("test_mushfiq.txt","r");
        while(1)
        {
            c = fgetc(test_mushfiq);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_mushfiq,"%s",&c);
        fclose(test_mushfiq);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);

        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);

        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);

        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_mushfiq;
            test_mushfiq = fopen("test_mushfiq.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_mushfiq == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mushfiqur Rahim\n\n");

                fprintf(test_mushfiq,"\t\t\t\t\t\t     Mushfiqur Rahim\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: May 09, 1987\n\tAge: 33\n\tBirth Place: Bogra\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",test_mushfiq);

                fprintf(test_mushfiq,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_mushfiq,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_mushfiq,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_mushfiq);
                test_mushfiq = fopen("test_mushfiq.txt","r");
                while(1)
                {
                    c = fgetc(test_mushfiq);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_mushfiq,"%s",&c);
                fclose(test_mushfiq);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_mithun()
{
    char c;
    FILE *test_mithun;
    test_mithun = fopen("test_mithun.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 10;
    Innings = 18;
    Not_Out = 0;
    Runs = 333;
    Ball_faced = 752;
    Highest_Score = 67;
    hundred = 0;
    fifty = 2;
    Bowl_Match = 10;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 6;
    Stumping = 0;
    Average = 18.50;
    Strike_Rate = 44.28;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (test_mithun == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Mithun\n\n");

        fprintf(test_mithun,"\t\t\t\t\t\t    Mohammad Mithun\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: March 2, 1991\n\tAge: 30\n\tBirth Place: Kushtia\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_mithun);

        fprintf(test_mithun,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_mithun,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_mithun,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_mithun);
        test_mithun = fopen("test_mithun.txt","r");
        while(1)
        {
            c = fgetc(test_mithun);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_mithun,"%s",&c);
        fclose(test_mithun);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;

        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);

        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_mithun;
            test_mithun = fopen("test_mithun.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;

            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }
            if (test_mithun == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Mithun\n\n");

                fprintf(test_mithun,"\t\t\t\t\t\t    Mohammad Mithun\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: March 2, 1991\n\tAge: 30\n\tBirth Place: Kushtia\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_mithun);

                fprintf(test_mithun,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_mithun,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_mithun,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_mithun);
                test_mithun = fopen("test_mithun.txt","r");
                while(1)
                {
                    c = fgetc(test_mithun);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }
                fscanf(test_mithun,"%s",&c);
                fclose(test_mithun);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_liton()
{
    char c;
    FILE *test_liton;
    test_liton = fopen("test_liton.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 22;
    Innings = 38;
    Not_Out = 1;
    Runs = 1059;
    Ball_faced = 1834;
    Highest_Score = 94;
    hundred = 0;
    fifty = 7;
    Bowl_Match = 22;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 37;
    Stumping = 3;
    Average = 28.62;
    Strike_Rate = 57.74;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (test_liton == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Liton Das\n\n");

        fprintf(test_liton,"\t\t\t\t\t\t    Liton Das\n\t\t\t\t\t\t    ----------\n\nPersonal Information:\n\n\tBorn: October 13, 1994\n\tAge: 26\n\tBirth Place: Dinajpur\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_liton);

        fprintf(test_liton,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_liton,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_liton,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_liton);
        test_liton = fopen("test_liton.txt","r");
        while(1)
        {
            c = fgetc(test_liton);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_liton,"%s",&c);
        fclose(test_liton);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_liton;
            test_liton = fopen("test_liton.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_liton == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Liton Das\n\n");

                fprintf(test_liton,"\t\t\t\t\t\t    Liton Das\n\t\t\t\t\t\t    ----------\n\nPersonal Information:\n\n\tBorn: October 13, 1994\n\tAge: 26\n\tBirth Place: Dinajpur\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_liton);

                fprintf(test_liton,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_liton,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_liton,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_liton);
                test_liton = fopen("test_liton.txt","r");
                while(1)
                {
                    c = fgetc(test_liton);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_liton,"%s",&c);
                fclose(test_liton);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_shanto()
{
    char c;
    FILE *test_shanto;
    test_shanto = fopen("test_shanto.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 6;
    Innings = 11;
    Not_Out = 0;
    Runs = 241;
    Ball_faced = 582;
    Highest_Score = 71;
    hundred = 0;
    fifty =1;
    Bowl_Match = 6;
    Bowl_Innings = 1;
    Ball = 4;
    conceded_Runs = 13;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 6;
    Stumping = 0;
    Average = 21.90;
    Strike_Rate = 41.40;
    Economy = 19.50;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (test_shanto == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Najmul Hossain Shanto\n\n");

        fprintf(test_shanto,"\t\t\t\t\t\t    Najmul Hossain Shanto\n\t\t\t\t\t\t    ------------------------\n\nPersonal Information:\n\n\tBorn: August 25, 1998\n\tAge: 22\n\tBirth Place: Rajshahi\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_shanto);

        fprintf(test_shanto,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_shanto,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/13\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_shanto,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_shanto);
        test_shanto = fopen("test_shanto.txt","r");
        while(1)
        {
            c = fgetc(test_shanto);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_shanto,"%s",&c);
        fclose(test_shanto);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_shanto;
            test_shanto = fopen("test_shanto.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_shanto == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Najmul Hossain Shanto\n\n");

                fprintf(test_shanto,"\t\t\t\t\t\t    Najmul Hossain Shanto\n\t\t\t\t\t\t    ------------------------\n\nPersonal Information:\n\n\tBorn: August 25, 1998\n\tAge: 22\n\tBirth Place: Rajshahi\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_shanto);

                fprintf(test_shanto,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_shanto,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_shanto,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_shanto);
                test_shanto = fopen("test_shanto.txt","r");
                while(1)
                {
                    c = fgetc(test_shanto);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_shanto,"%s",&c);
                fclose(test_shanto);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_yasir()
{
    char c;
    FILE *test_yasir;
    test_yasir = fopen("test_yasir.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 0;
    Innings = 0;
    Not_Out = 0;
    Runs = 0;
    Ball_faced = 0;
    Highest_Score = 0;
    hundred = 0;
    fifty =0;
    Bowl_Match = 0;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 0;
    Strike_Rate = 0;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (test_yasir == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile ofYasir Ali Rabbi\n\n");

        fprintf(test_yasir,"\t\t\t\t\t\t    Yasir Ali Rabbi\n\t\t\t\t\t\t    ----------------\n\nPersonal Information:\n\n\tBorn: March 06, 1996\n\tAge: 26\n\tBirth Place: Chittagong\n\tRole: Middle-order Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_yasir);

        fprintf(test_yasir,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_yasir,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/13\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_yasir,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_yasir);
        test_yasir = fopen("test_yasir.txt","r");
        while(1)
        {
            c = fgetc(test_yasir);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_yasir,"%s",&c);
        fclose(test_yasir);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_yasir;
            test_yasir = fopen("test_yasir.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_yasir == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile ofYasir Ali Rabbi\n\n");

                fprintf(test_yasir,"\t\t\t\t\t\t    Yasir Ali Rabbi\n\t\t\t\t\t\t    ----------------\n\nPersonal Information:\n\n\tBorn: March 06, 1996\n\tAge: 26\n\tBirth Place: Chittagong\n\tRole: Middle-order Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_yasir);

                fprintf(test_yasir,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_yasir,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_yasir,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_yasir);
                test_yasir = fopen("test_yasir.txt","r");
                while(1)
                {
                    c = fgetc(test_yasir);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_yasir,"%s",&c);
                fclose(test_yasir);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_shakib()
{
    char c;
    FILE *test_shakib;
    test_shakib = fopen("test_shakib.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 57;
    Innings = 106;
    Not_Out = 7;
    Runs = 3930;
    Ball_faced = 6374;
    Highest_Score = 217;
    hundred = 5;
    fifty =25;
    Bowl_Match = 57;
    Bowl_Innings = 69;
    Ball = 13056;
    conceded_Runs = 6553;
    Wickets = 210;
    Best_Wickets = 10;
    five_Wickets = 18;
    ten_Wickets = 2;
    Catch = 24;
    Stumping = 0;
    Average = 39.69;
    Strike_Rate = 61.65;
    Economy = 3.01;
    Bowl_Average = 31.20;
    Bowl_Strike_Rate = 62.1;
    if (test_shakib == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Shakib Al Hasan\n\n");

        fprintf(test_shakib,"\t\t\t\t\t\t    Shakib Al Hasan\n\t\t\t\t\t\t    ----------------\n\nPersonal Information:\n\n\tBorn: March 24, 1987\n\tAge: 34\n\tBirth Place: Magura\n\tRole: Allrounder\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Left-arm orthodox\n\n",test_shakib);

        fprintf(test_shakib,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_shakib,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 10/124\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_shakib,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_shakib);
        test_shakib = fopen("test_shakib.txt","r");
        while(1)
        {
            c = fgetc(test_shakib);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_shakib,"%s",&c);


        fclose(test_shakib);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_shakib;
            test_shakib = fopen("test_shakib.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_shakib == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Shakib Al Hasan\n\n");

                fprintf(test_shakib,"\t\t\t\t\t\t    Shakib Al Hasan\n\t\t\t\t\t\t    ----------------\n\nPersonal Information:\n\n\tBorn: March 24, 1987\n\tAge: 34\n\tBirth Place: Magura\n\tRole: Allrounder\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Left-arm orthodox\n\n",test_shakib);

                fprintf(test_shakib,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_shakib,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_shakib,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_shakib);
                test_shakib = fopen("test_shakib.txt","r");
                while(1)
                {
                    c = fgetc(test_shakib);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);

                }

                fscanf(test_shakib,"%s",&c);
                fclose(test_shakib);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_riad()
{
    char c;
    FILE *test_riad;
    test_riad = fopen("test_riad.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 49;
    Innings = 93;
    Not_Out = 6;
    Runs = 2764;
    Ball_faced = 5178;
    Highest_Score = 146;
    hundred = 4;
    fifty =16;
    Bowl_Match = 49;
    Bowl_Innings = 65;
    Ball = 3399;
    conceded_Runs = 1949;
    Wickets = 43;
    Best_Wickets = 8;
    five_Wickets = 1;
    ten_Wickets = 0;
    Catch = 38;
    Stumping = 1;
    Average = 31.77;
    Strike_Rate = 53.37;
    Economy = 3.44;
    Bowl_Average = 45.22;
    Bowl_Strike_Rate = 79.0;
    if (test_riad == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Mahmudullah\n\n");

        fprintf(test_riad,"\t\t\t\t\t\t    Mohammad Mahmudullah\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: February 4, 1986\n\tAge: 35\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_riad);

        fprintf(test_riad,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_riad,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 8/110\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_riad,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_riad);
        test_riad = fopen("test_riad.txt","r");
        while(1)
        {
            c = fgetc(test_riad);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }

        fscanf(test_riad,"%s",&c);

        fclose(test_riad);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_riad;
            test_riad = fopen("test_riad.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_riad == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Mahmudullah\n\n");

                fprintf(test_riad,"\t\t\t\t\t\t    Mohammad Mahmudullah\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: February 4, 1986\n\tAge: 35\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_riad);

                fprintf(test_riad,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_riad,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_riad,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_riad);
                test_riad = fopen("test_riad.txt","r");
                while(1)
                {
                    c = fgetc(test_riad);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_riad,"%s",&c);
                fclose(test_riad);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_miraj()
{
    char c;
    FILE *test_miraj;
    test_miraj = fopen("test_miraj.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 24;
    Innings = 46;
    Not_Out = 6;
    Runs = 836;
    Ball_faced = 1607;
    Highest_Score = 103;
    hundred = 1;
    fifty =3;
    Bowl_Match = 24;
    Bowl_Innings = 41;
    Ball = 5906;
    conceded_Runs = 3242;
    Wickets = 100;
    Best_Wickets = 12;
    five_Wickets = 7;
    ten_Wickets = 2;
    Catch = 19;
    Stumping = 0;
    Average = 20.90;
    Strike_Rate = 52.02;
    Economy = 3.29;
    Bowl_Average = 32.42;
    Bowl_Strike_Rate = 99.0;
    if (test_miraj == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mehidy Hasan Miraz\n\n");

        fprintf(test_miraj,"\t\t\t\t\t\t    Mehidy Hasan Miraz\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: October 25, 1997\n\tAge: 23\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_miraj);

        fprintf(test_miraj,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_miraj,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 12/117\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_miraj,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_miraj);
        test_miraj = fopen("test_miraj.txt","r");
        while(1)
        {
            c = fgetc(test_miraj);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_miraj,"%s",&c);
        fclose(test_miraj);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_miraj;
            test_miraj = fopen("test_miraj.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_miraj == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mehidy Hasan Miraz\n\n");

                fprintf(test_miraj,"\t\t\t\t\t\t    Mehidy Hasan Miraz\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: October 25, 1997\n\tAge: 23\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_miraj);

                fprintf(test_miraj,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_miraj,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_miraj,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_miraj);
                test_miraj = fopen("test_miraj.txt","r");
                while(1)
                {
                    c = fgetc(test_miraj);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_miraj,"%s",&c);
                fclose(test_miraj);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_saikot()
{
    char c;
    FILE *test_saikot;
    test_saikot = fopen("test_saikot.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 3;
    Innings = 6;
    Not_Out = 2;
    Runs = 164;
    Ball_faced = 315;
    Highest_Score = 75;
    hundred = 0;
    fifty =1;
    Bowl_Match = 3;
    Bowl_Innings = 5;
    Ball = 90;
    conceded_Runs = 49;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 2;
    Stumping = 0;
    Average = 41.00;
    Strike_Rate = 46.85;
    Economy = 3.26;
    Bowl_Average = 0;
    Bowl_Strike_Rate =0;
    if (test_saikot == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mosaddek Hossain\n\n");

        fprintf(test_saikot,"\t\t\t\t\t\t    Mosaddek Hossain\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: December 10, 1995\n\tAge: 22\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_saikot);

        fprintf(test_saikot,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_saikot,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/4\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_saikot,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_saikot);
        test_saikot = fopen("test_saikot.txt","r");
        while(1)
        {

            c = fgetc(test_saikot);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }

        fscanf(test_saikot,"%s",&c);


        fclose(test_saikot);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_saikot;
            test_saikot = fopen("test_saikot.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_saikot == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mosaddek Hossain\n\n");

                fprintf(test_saikot,"\t\t\t\t\t\t    Mosaddek Hossain\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: December 10, 1995\n\tAge: 22\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",test_saikot);

                fprintf(test_saikot,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_saikot,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_saikot,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_saikot);
                test_saikot = fopen("test_saikot.txt","r");
                while(1)
                {
                    c = fgetc(test_saikot);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_saikot,"%s",&c);
                fclose(test_saikot);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_mustafiz()
{
    char c;
    FILE *test_mustafiz;
    test_mustafiz = fopen("test_mustafiz.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 14;
    Innings = 20;
    Not_Out = 0;
    Runs = 59;
    Ball_faced = 149;
    Highest_Score = 16;
    hundred = 0;
    fifty =0;
    Bowl_Match = 14;
    Bowl_Innings = 23;
    Ball = 2013;
    conceded_Runs = 1102;
    Wickets = 30;
    Best_Wickets = 5;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 1;
    Stumping = 0;
    Average = 4.53;
    Strike_Rate = 39.6;
    Economy = 3.28;
    Bowl_Average = 36.73;
    Bowl_Strike_Rate =67.1;
    if (test_mustafiz == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mustafizur Rahman\n\n");

        fprintf(test_mustafiz,"\t\t\t\t\t\t    Mustafizur Rahman\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: September 6, 1995\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Left-arm fast-medium\n\n",test_mustafiz);

        fprintf(test_mustafiz,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_mustafiz,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 5/66\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_mustafiz,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_mustafiz);
        test_mustafiz = fopen("test_mustafiz.txt","r");
        while(1)
        {
            c = fgetc(test_mustafiz);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_mustafiz,"%s",&c);
        fclose(test_mustafiz);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_mustafiz;
            test_mustafiz = fopen("test_mustafiz.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_mustafiz == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mustafizur Rahman\n\n");

                fprintf(test_mustafiz,"\t\t\t\t\t\t    Mustafizur Rahman\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: September 6, 1995\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Left-arm fast-medium\n\n",test_mustafiz);

                fprintf(test_mustafiz,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_mustafiz,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_mustafiz,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_mustafiz);
                test_mustafiz = fopen("test_mustafiz.txt","r");
                while(1)
                {
                    c = fgetc(test_mustafiz);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_mustafiz,"%s",&c);
                fclose(test_mustafiz);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_rahi()
{
    char c;
    FILE *test_rahi;
    test_rahi = fopen("test_rahi.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 10;
    Innings = 18;
    Not_Out = 7;
    Runs = 28;
    Ball_faced = 128;
    Highest_Score = 7;
    hundred = 0;
    fifty =0;
    Bowl_Match = 10;
    Bowl_Innings = 14;
    Ball = 1622;
    conceded_Runs = 909;
    Wickets = 30;
    Best_Wickets = 6;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 1;
    Stumping = 0;
    Average = 2.54;
    Strike_Rate = 21.87;
    Economy = 3.36;
    Bowl_Average = 30.30;
    Bowl_Strike_Rate =54.0;
    if (test_rahi == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Abu Jayed\n\n");

        fprintf(test_rahi,"\t\t\t\t\t\t    Abu Jayed\n\t\t\t\t\t\t    ----------\n\nPersonal Information:\n\n\tBorn: August 2, 1993\n\tAge: 27\n\tBirth Place: Sylhet\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_rahi);

        fprintf(test_rahi,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_rahi,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 6/130\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_rahi,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_rahi);
        test_rahi = fopen("test_rahi.txt","r");
        while(1)
        {
            c = fgetc(test_rahi);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_rahi,"%s",&c);
        fclose(test_rahi);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_rahi;
            test_rahi = fopen("test_rahi.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_rahi == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Abu Jayed\n\n");

                fprintf(test_rahi,"\t\t\t\t\t\t    Abu Jayed\n\t\t\t\t\t\t    ----------\n\nPersonal Information:\n\n\tBorn: August 2, 1993\n\tAge: 27\n\tBirth Place: Sylhet\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_rahi);

                fprintf(test_rahi,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_rahi,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_rahi,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_rahi);
                test_rahi = fopen("test_rahi.txt","r");
                while(1)
                {
                    c = fgetc(test_rahi);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_rahi,"%s",&c);
                fclose(test_rahi);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_ibadot()
{
    char c;
    FILE *test_ibadot;
    test_ibadot = fopen("test_ibadot.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 6;
    Innings = 10;
    Not_Out = 4;
    Runs = 4;
    Ball_faced = 35;
    Highest_Score = 2;
    hundred = 0;
    fifty =0;
    Bowl_Match = 6;
    Bowl_Innings = 7;
    Ball = 852;
    conceded_Runs = 536;
    Wickets = 6;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 1;
    Stumping = 0;
    Average = 0.66;
    Strike_Rate = 11.42;
    Economy = 3.77;
    Bowl_Average = 89.33;
    Bowl_Strike_Rate =142.0;
    if (test_ibadot == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Ebadot Hossain\n\n");

        fprintf(test_ibadot,"\t\t\t\t\t\t    Ebadot Hossain\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: January 7, 1994\n\tAge: 27\n\tBirth Place: Moulvibazar\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_ibadot);

        fprintf(test_ibadot,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_ibadot,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/91\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_ibadot,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_ibadot);
        test_ibadot = fopen("test_ibadot.txt","r");
        while(1)
        {
            c = fgetc(test_ibadot);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_ibadot,"%s",&c);
        fclose(test_ibadot);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_ibadot;
            test_ibadot = fopen("test_ibadot.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_ibadot == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Ebadot Hossain\n\n");

                fprintf(test_ibadot,"\t\t\t\t\t\t    Ebadot Hossain\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: January 7, 1994\n\tAge: 27\n\tBirth Place: Moulvibazar\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_ibadot);

                fprintf(test_ibadot,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_ibadot,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_ibadot,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_ibadot);
                test_ibadot = fopen("test_ibadot.txt","r");
                while(1)
                {
                    c = fgetc(test_ibadot);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_ibadot,"%s",&c);
                fclose(test_ibadot);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_shafiul()
{
    char c;
    FILE *test_shafiul;
    test_shafiul = fopen("test_shafiul.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 11;
    Innings = 21;
    Not_Out = 1;
    Runs = 211;
    Ball_faced = 439;
    Highest_Score = 53;
    hundred = 0;
    fifty =1;
    Bowl_Match = 11;
    Bowl_Innings = 19;
    Ball = 1734;
    conceded_Runs = 942;
    Wickets = 17;
    Best_Wickets = 4;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 2;
    Stumping = 0;
    Average = 10.55;
    Strike_Rate = 48.06;
    Economy = 3.25;
    Bowl_Average = 55.41;
    Bowl_Strike_Rate =102.0;
    if (test_shafiul == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Shafiul Islam\n\n");

        fprintf(test_shafiul,"\t\t\t\t\t\t    Shafiul Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: October 6, 1989\n\tAge: 31\n\tBirth Place: Bogra\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_shafiul);

        fprintf(test_shafiul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_shafiul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 4/67\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_shafiul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_shafiul);
        test_shafiul = fopen("test_shafiul.txt","r");
        while(1)
        {
            c = fgetc(test_shafiul);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_shafiul,"%s",&c);
        fclose(test_shafiul);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_shafiul;
            test_shafiul = fopen("test_shafiul.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_shafiul == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Shafiul Islam\n\n");

                fprintf(test_shafiul,"\t\t\t\t\t\t    Shafiul Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: October 6, 1989\n\tAge: 31\n\tBirth Place: Bogra\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_shafiul);

                fprintf(test_shafiul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_shafiul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_shafiul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_shafiul);
                test_shafiul = fopen("test_shafiul.txt","r");
                while(1)
                {
                    c = fgetc(test_shafiul);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_shafiul,"%s",&c);
                fclose(test_shafiul);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_al_amin()
{
    char c;
    FILE *test_al_amin;
    test_al_amin = fopen("test_al_amin.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 7;
    Innings = 11;
    Not_Out = 7;
    Runs = 90;
    Ball_faced = 131;
    Highest_Score = 32;
    hundred = 0;
    fifty =0;
    Bowl_Match = 7;
    Bowl_Innings = 10;
    Ball = 1016;
    conceded_Runs = 545;
    Wickets = 9;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 1;
    Stumping = 0;
    Average = 22.50;
    Strike_Rate = 70.86;
    Economy = 3.21;
    Bowl_Average = 60.55;
    Bowl_Strike_Rate =112.8;
    if (test_al_amin == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Al-Amin Hossain\n\n");

        fprintf(test_al_amin,"\t\t\t\t\t\t    Al-Amin Hossain\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Jhnidah\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_al_amin);

        fprintf(test_al_amin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_al_amin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/85\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_al_amin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_al_amin);
        test_al_amin = fopen("test_al_amin.txt","r");
        while(1)
        {
            c = fgetc(test_al_amin);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_al_amin,"%s",&c);
        fclose(test_al_amin);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_al_amin;
            test_al_amin = fopen("test_al_amin.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_al_amin == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Al-Amin Hossain\n\n");

                fprintf(test_al_amin,"\t\t\t\t\t\t    Al-Amin Hossain\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Jhnidah\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_al_amin);

                fprintf(test_al_amin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_al_amin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_al_amin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_al_amin);
                test_al_amin = fopen("test_al_amin.txt","r");
                while(1)
                {
                    c = fgetc(test_al_amin);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_al_amin,"%s",&c);
                fclose(test_al_amin);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_taskin()
{
    char c;
    FILE *test_taskin;
    test_taskin = fopen("test_taskin.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 5;
    Innings = 10;
    Not_Out = 0;
    Runs = 68;
    Ball_faced = 166;
    Highest_Score = 33;
    hundred = 0;
    fifty =0;
    Bowl_Match = 5;
    Bowl_Innings = 10;
    Ball = 930;
    conceded_Runs = 682;
    Wickets = 7;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 1;
    Stumping = 0;
    Average = 6.80;
    Strike_Rate = 40.96;
    Economy = 4.40;
    Bowl_Average = 97.42;
    Bowl_Strike_Rate =132.8;
    if (test_taskin == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Taskin Ahmed\n\n");

        fprintf(test_taskin,"\t\t\t\t\t\t    Taskin Ahmed\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: April 3, 1995\n\tAge: 25\n\tBirth Place: Dhaka\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Right-arm fast\n\n",test_taskin);

        fprintf(test_taskin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_taskin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/43\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_taskin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_taskin);
        test_taskin = fopen("test_taskin.txt","r");
        while(1)
        {
            c = fgetc(test_taskin);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }

        fscanf(test_taskin,"%s",&c);
        fclose(test_taskin);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_taskin;
            test_taskin = fopen("test_taskin.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_taskin == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Taskin Ahmed\n\n");

                fprintf(test_taskin,"\t\t\t\t\t\t    Taskin Ahmed\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: April 3, 1995\n\tAge: 25\n\tBirth Place: Dhaka\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Right-arm fast\n\n",test_taskin);

                fprintf(test_taskin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_taskin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_taskin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_taskin);
                test_taskin = fopen("test_taskin.txt","r");
                while(1)
                {
                    c = fgetc(test_taskin);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_taskin,"%s",&c);
                fclose(test_taskin);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_taijul()
{
    char c;
    FILE *test_taijul;
    test_taijul = fopen("test_taijul.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 31;
    Innings = 52;
    Not_Out = 8;
    Runs = 454;
    Ball_faced = 1156;
    Highest_Score = 39;
    hundred = 0;
    fifty =0;
    Bowl_Match = 31;
    Bowl_Innings = 54;
    Ball = 7921;
    conceded_Runs = 4101;
    Wickets = 126;
    Best_Wickets = 11;
    five_Wickets = 7;
    ten_Wickets = 1;
    Catch = 17;
    Stumping = 0;
    Average = 10.31;
    Strike_Rate = 39.27;
    Economy = 3.10;
    Bowl_Average = 32.54;
    Bowl_Strike_Rate =62.8;
    if (test_taijul == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Taijul Islam\n\n");

        fprintf(test_taijul,"\t\t\t\t\t\t    Taijul Islam\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 7, 1992\n\tAge: 29\n\tBirth Place: Natore\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",test_taijul);

        fprintf(test_taijul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_taijul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 11/170\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_taijul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_taijul);
        test_taijul = fopen("test_taijul.txt","r");
        while(1)
        {
            c = fgetc(test_taijul);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_taijul,"%s",&c);
        fclose(test_taijul);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_taijul;
            test_taijul = fopen("test_taijul.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_taijul == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Taijul Islam\n\n");

                fprintf(test_taijul,"\t\t\t\t\t\t    Taijul Islam\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 7, 1992\n\tAge: 29\n\tBirth Place: Natore\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",test_taijul);

                fprintf(test_taijul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_taijul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_taijul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_taijul);
                test_taijul = fopen("test_taijul.txt","r");
                while(1)
                {
                    c = fgetc(test_taijul);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_taijul,"%s",&c);
                fclose(test_taijul);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  test_nayeem()
{
    char c;
    FILE * test_nayeem;
    test_nayeem = fopen(" test_nayeem.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 7;
    Innings = 10;
    Not_Out = 3;
    Runs = 109;
    Ball_faced = 248;
    Highest_Score = 26;
    hundred = 0;
    fifty =0;
    Bowl_Match = 7;
    Bowl_Innings = 12;
    Ball = 1322;
    conceded_Runs = 656;
    Wickets = 25;
    Best_Wickets = 9;
    five_Wickets = 2;
    ten_Wickets = 0;
    Catch = 4;
    Stumping = 0;
    Average = 15.57;
    Strike_Rate = 43.95;
    Economy = 2.97;
    Bowl_Average = 26.24;
    Bowl_Strike_Rate =52.8;
    if ( test_nayeem == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Nayeem Hasan\n\n");

        fprintf( test_nayeem,"\t\t\t\t\t\t    Nayeem Hasan\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 12, 2000\n\tAge: 21\n\tBirth Place: Chittagong\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n", test_nayeem);

        fprintf( test_nayeem,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf( test_nayeem,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 9/152\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf( test_nayeem,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose( test_nayeem);
        test_nayeem = fopen(" test_nayeem.txt","r");
        while(1)
        {
            c = fgetc( test_nayeem);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf( test_nayeem,"%s",&c);
        fclose( test_nayeem);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE * test_nayeem;
            test_nayeem = fopen(" test_nayeem.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if ( test_nayeem == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Nayeem Hasan\n\n");

                fprintf( test_nayeem,"\t\t\t\t\t\t    Nayeem Hasan\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 12, 2000\n\tAge: 21\n\tBirth Place: Chittagong\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n", test_nayeem);

                fprintf( test_nayeem,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf( test_nayeem,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf( test_nayeem,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose( test_nayeem);
                test_nayeem = fopen(" test_nayeem.txt","r");
                while(1)
                {
                    c = fgetc( test_nayeem);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);

                }

                fscanf( test_nayeem,"%s",&c);
                fclose( test_nayeem);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_rubel()
{
    char c;
    FILE *test_rubel;
    test_rubel = fopen("test_rubel.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 27;
    Innings = 47;
    Not_Out = 19;
    Runs = 165;
    Ball_faced = 603;
    Highest_Score = 45;
    hundred = 0;
    fifty =0;
    Bowl_Match = 27;
    Bowl_Innings = 44;
    Ball = 4223;
    conceded_Runs = 2764;
    Wickets = 36;
    Best_Wickets = 5;
    five_Wickets = 1;
    ten_Wickets = 0;
    Catch = 11;
    Stumping = 0;
    Average = 9.46;
    Strike_Rate = 43.94;
    Economy = 3.92;
    Bowl_Average = 76.77;
    Bowl_Strike_Rate =117.3;
    if (test_rubel == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Rubel Hossain\n\n");

        fprintf(test_rubel,"\t\t\t\t\t\t    Rubel Hossain\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Bagherhat\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast\n\n",test_rubel);

        fprintf(test_rubel,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_rubel,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 5/210\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_rubel,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_rubel);
        test_rubel = fopen("test_rubel.txt","r");
        while(1)
        {
            c = fgetc(test_rubel);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_rubel,"%s",&c);
        fclose(test_rubel);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_rubel;
            test_rubel = fopen("test_rubel.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_rubel == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Rubel Hossain\n\n");

                fprintf(test_rubel,"\t\t\t\t\t\t    Rubel Hossain\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Bagherhat\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast\n\n",test_rubel);

                fprintf(test_rubel,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_rubel,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_rubel,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_rubel);
                test_rubel = fopen("test_rubel.txt","r");
                while(1)
                {
                    c = fgetc(test_rubel);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_rubel,"%s",&c);
                fclose(test_rubel);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void test_h_mahmud()
{
    char c;
    FILE *test_h_mahmud;
    test_h_mahmud = fopen("test_h_mahmud.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 0;
    Innings = 0;
    Not_Out = 0;
    Runs = 0;
    Ball_faced = 0;
    Highest_Score = 0;
    hundred = 0;
    fifty =0;
    Bowl_Match = 0;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 0;
    Strike_Rate = 0;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate =0;
    if (test_h_mahmud == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Hasan Mahmud\n\n");

        fprintf(test_h_mahmud,"\t\t\t\t\t\t    Hasan Mahmud\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: October 12, 1999\n\tAge: 21\n\tBirth Place: Laxmipur\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_h_mahmud);

        fprintf(test_h_mahmud,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(test_h_mahmud,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(test_h_mahmud,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(test_h_mahmud);
        test_h_mahmud = fopen("test_h_mahmud.txt","r");
        while(1)
        {
            c = fgetc(test_h_mahmud);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(test_h_mahmud,"%s",&c);
        fclose(test_h_mahmud);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *test_h_mahmud;
            test_h_mahmud = fopen("test_h_mahmud.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (test_h_mahmud == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Hasan Mahmud\n\n");

                fprintf(test_h_mahmud,"\t\t\t\t\t\t    Hasan Mahmud\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: October 12, 1999\n\tAge: 21\n\tBirth Place: Laxmipur\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",test_h_mahmud);

                fprintf(test_h_mahmud,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(test_h_mahmud,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(test_h_mahmud,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(test_h_mahmud);
                test_h_mahmud = fopen("test_h_mahmud.txt","r");
                while(1)
                {
                    c = fgetc(test_h_mahmud);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(test_h_mahmud,"%s",&c);
                fclose(test_h_mahmud);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

//ODI

void odi_tamim()
{
    char c;
    FILE *odi_tamim;
    odi_tamim = fopen("odi_tamim.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 213;
    Innings = 211;
    Not_Out = 9;
    Runs = 7452;
    Ball_faced = 7915;
    Highest_Score = 158;
    hundred = 13;
    fifty =50;
    Bowl_Match = 78;
    Bowl_Innings = 2;
    Ball = 6;
    conceded_Runs = 13;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 55;
    Stumping = 0;
    Average = 36.89;
    Strike_Rate = 78.35;
    Economy = 13.00;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (odi_tamim == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Tamim Iqbal\n\n");

        fprintf(odi_tamim,"\t\t\t\t\t\t    Tamim Iqbal\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: March 20, 1989 \n\tAge: 32\n\tBirth Place: Chittagong\n\tRole: Opening Batsman\n\tBatting Style:Left-handed bat\n\tBowling Style: Right arm ofbreak\n\n",odi_tamim);

        fprintf(odi_tamim,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_tamim,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/6\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_tamim,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_tamim);
        odi_tamim = fopen("odi_tamim.txt","r");
        while(1)
        {
            c = fgetc(odi_tamim);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_tamim,"%s",&c);
        fclose(odi_tamim);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_tamim;
            odi_tamim = fopen("odi_tamim.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_tamim == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Tamim Iqbal\n\n");

                fprintf(odi_tamim,"\t\t\t\t\t\t    Tamim Iqbal\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: March 20, 1989 \n\tAge: 32\n\tBirth Place: Chittagong\n\tRole: Opening Batsman\n\tBatting Style:Left-handed bat\n\tBowling Style: Right arm ofbreak\n\n",odi_tamim);

                fprintf(odi_tamim,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_tamim,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_tamim,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_tamim);
                odi_tamim = fopen("odi_tamim.txt","r");
                while(1)
                {
                    c = fgetc(odi_tamim);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_tamim,"%s",&c);
                fclose(odi_tamim);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_liton()
{
    char c;
    FILE *odi_liton;
    odi_liton = fopen("odi_liton.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 42;
    Innings = 42;
    Not_Out = 3;
    Runs = 1155;
    Ball_faced = 1260	;
    Highest_Score = 176;
    hundred = 3;
    fifty = 3;
    Bowl_Match = 42;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 31;
    Stumping = 3;
    Average = 29.61;
    Strike_Rate = 91.66;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (odi_liton == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Liton Das\n\n");

        fprintf(odi_liton,"\t\t\t\t\t\t    Liton Das\n\t\t\t\t\t\t    ----------\n\nPersonal Information:\n\n\tBorn: October 13, 1994\n\tAge: 26\n\tBirth Place: Dinajpur\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_liton);

        fprintf(odi_liton,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_liton,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_liton,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_liton);
        odi_liton = fopen("odi_liton.txt","r");
        while(1)
        {
            c = fgetc(odi_liton);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }

        fscanf(odi_liton,"%s",&c);
        fclose(odi_liton);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_liton;
            odi_liton = fopen("odi_liton.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_liton == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Liton Das\n\n");

                fprintf(odi_liton,"\t\t\t\t\t\t    Liton Das\n\t\t\t\t\t\t    ----------\n\nPersonal Information:\n\n\tBorn: October 13, 1994\n\tAge: 26\n\tBirth Place: Dinajpur\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_liton);

                fprintf(odi_liton,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_liton,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_liton,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_liton);
                odi_liton = fopen("odi_liton.txt","r");
                while(1)
                {
                    c = fgetc(odi_liton);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_liton,"%s",&c);
                fclose(odi_liton);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_soumya()
{
    char c;
    FILE *odi_soumya;
    odi_soumya = fopen("odi_soumya.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 61;
    Innings = 58;
    Not_Out = 3;
    Runs = 1768;
    Ball_faced = 1816;
    Highest_Score =127;
    hundred = 2;
    fifty = 11;
    Bowl_Match = 61;
    Bowl_Innings = 18;
    Ball = 400;
    conceded_Runs = 389;
    Wickets = 11;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 34;
    Stumping = 0;
    Average = 32.12;
    Strike_Rate = 97.35;
    Economy = 5.83;
    Bowl_Average = 35.36;
    Bowl_Strike_Rate = 36.30;
    if (odi_soumya == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Soumya Sarkar\n\n");

        fprintf(odi_soumya,"\t\t\t\t\t\t    Soumya Sarkar\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 25, 1992\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm Medium-fast\n\n",odi_soumya);

        fprintf(odi_soumya,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_soumya,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/56\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_soumya,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_soumya);
        odi_soumya = fopen("odi_soumya.txt","r");
        while(1)
        {
            c = fgetc(odi_soumya);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_soumya,"%s",&c);
        fclose(odi_soumya);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_soumya;
            odi_soumya = fopen("odi_soumya.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_soumya == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Soumya Sarkar\n\n");

                fprintf(odi_soumya,"\t\t\t\t\t\t    Soumya Sarkar\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 25, 1992\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm Medium-fast\n\n",odi_soumya);

                fprintf(odi_soumya,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_soumya,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_soumya,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_soumya);
                odi_soumya = fopen("odi_soumya.txt","r");
                while(1)
                {
                    c = fgetc(odi_soumya);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_soumya,"%s",&c);
                fclose(odi_soumya);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_naim()
{
    char c;
    FILE *odi_naim;
    odi_naim = fopen("odi_naim.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 1;
    Innings = 0;
    Not_Out = 0;
    Runs = 0;
    Ball_faced = 0;
    Highest_Score =0;
    hundred = 0;
    fifty = 0;
    Bowl_Match = 0;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 0;
    Strike_Rate = 0;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (odi_naim == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Naim Sheikh\n\n");

        fprintf(odi_naim,"\t\t\t\t\t\t     Mohammad Naim Sheikh\n\t\t\t\t\t\t    ----------------------\n\nPersonal Information:\n\n\tBorn: August 21, 1999\n\tAge: 21\n\tBirth Place: Dhaka\n\tRole: Opening Batsman\n\tBatting Style: Left-handed bat\n\tBowling Style: Right arm ofbreak\n\n",odi_naim);

        fprintf(odi_naim,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_naim,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_naim,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_naim);
        odi_naim = fopen("odi_naim.txt","r");
        while(1)
        {
            c = fgetc(odi_naim);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_naim,"%s",&c);
        fclose(odi_naim);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_naim;
            odi_naim = fopen("odi_naim.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_naim == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Naim Sheikh\n\n");

                fprintf(odi_naim,"\t\t\t\t\t\t     Mohammad Naim Sheikh\n\t\t\t\t\t\t    ----------------------\n\nPersonal Information:\n\n\tBorn: August 21, 1999\n\tAge: 21\n\tBirth Place: Dhaka\n\tRole: Opening Batsman\n\tBatting Style: Left-handed bat\n\tBowling Style: Slow right-arm offbreak\n\n",odi_naim);

                fprintf(odi_naim,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_naim,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_naim,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_naim);
                odi_naim = fopen("odi_naim.txt","r");
                while(1)
                {
                    c = fgetc(odi_naim);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_naim,"%s",&c);
                fclose(odi_naim);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_mushfiq()
{
    char c;
    FILE *odi_mushfiq;
    odi_mushfiq = fopen("odi_mushfiq.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 224;
    Innings = 210;
    Not_Out = 36;
    Runs = 6344;
    Ball_faced = 8057;
    Highest_Score =144;
    hundred = 7;
    fifty = 39;
    Bowl_Match = 86;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 188;
    Stumping = 46;
    Average = 36.45;
    Strike_Rate = 78.73;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (odi_mushfiq == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mushfiqur Rahim\n\n");

        fprintf(odi_mushfiq,"\t\t\t\t\t\t     Mushfiqur Rahim\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: May 09, 1987\n\tAge: 33\n\tBirth Place: Bogra\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",odi_mushfiq);

        fprintf(odi_mushfiq,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_mushfiq,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_mushfiq,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_mushfiq);
        odi_mushfiq = fopen("odi_mushfiq.txt","r");
        while(1)
        {
            c = fgetc(odi_mushfiq);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_mushfiq,"%s",&c);
        fclose(odi_mushfiq);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_mushfiq;
            odi_mushfiq = fopen("odi_mushfiq.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_mushfiq == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mushfiqur Rahim\n\n");

                fprintf(odi_mushfiq,"\t\t\t\t\t\t     Mushfiqur Rahim\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: May 09, 1987\n\tAge: 33\n\tBirth Place: Bogra\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",odi_mushfiq);

                fprintf(odi_mushfiq,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_mushfiq,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_mushfiq,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_mushfiq);
                odi_mushfiq = fopen("odi_mushfiq.txt","r");
                while(1)
                {
                    c = fgetc(odi_mushfiq);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_mushfiq,"%s",&c);
                fclose(odi_mushfiq);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_shanto()
{
    char c;
    FILE *odi_shanto;
    odi_shanto = fopen("odi_shanto.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 8;
    Innings = 8;
    Not_Out = 0;
    Runs = 93;
    Ball_faced = 158;
    Highest_Score = 29;
    hundred = 0;
    fifty =0;
    Bowl_Match = 8;
    Bowl_Innings = 1;
    Ball = 6;
    conceded_Runs = 4;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 6;
    Stumping = 0;
    Average = 11.62;
    Strike_Rate = 58.86;
    Economy = 19.50;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (odi_shanto == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Najmul Hossain Shanto\n\n");

        fprintf(odi_shanto,"\t\t\t\t\t\t    Najmul Hossain Shanto\n\t\t\t\t\t\t    ---------------------\n\nPersonal Information:\n\n\tBorn: August 25, 1998\n\tAge: 22\n\tBirth Place: Rajshahi\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_shanto);

        fprintf(odi_shanto,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_shanto,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/4\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_shanto,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_shanto);
        odi_shanto = fopen("odi_shanto.txt","r");
        while(1)
        {
            c = fgetc(odi_shanto);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_shanto,"%s",&c);
        fclose(odi_shanto);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_shanto;
            odi_shanto = fopen("odi_shanto.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_shanto == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Najmul Hossain Shanto\n\n");

                fprintf(odi_shanto,"\t\t\t\t\t\t    Najmul Hossain Shanto\n\t\t\t\t\t\t    ---------------------\n\nPersonal Information:\n\n\tBorn: August 25, 1998\n\tAge: 22\n\tBirth Place: Rajshahi\n\tRole: Middle-order Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_shanto);

                fprintf(odi_shanto,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_shanto,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_shanto,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_shanto);
                odi_shanto = fopen("odi_shanto.txt","r");
                while(1)
                {
                    c = fgetc(odi_shanto);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);

                }

                fscanf(odi_shanto,"%s",&c);
                fclose(odi_shanto);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_mithun()
{
    char c;
    FILE *odi_mithun;
    odi_mithun = fopen("odi_mithun.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 30;
    Innings = 26;
    Not_Out = 4;
    Runs = 663;
    Ball_faced = 841;
    Highest_Score = 73;
    hundred = 0;
    fifty = 6;
    Bowl_Match = 30;
    Bowl_Innings = 1;
    Ball = 12;
    conceded_Runs = 12;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 7;
    Stumping = 0;
    Average = 30.13;
    Strike_Rate = 78.83;
    Economy = 6.00;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (odi_mithun == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Mithun\n\n");

        fprintf(odi_mithun,"\t\t\t\t\t\t    Mohammad Mithun\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: March 2, 1991\n\tAge: 30\n\tBirth Place: Kushtia\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_mithun);

        fprintf(odi_mithun,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_mithun,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/12\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_mithun,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_mithun);
        odi_mithun = fopen("odi_mithun.txt","r");
        while(1)
        {
            c = fgetc(odi_mithun);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }
        fscanf(odi_mithun,"%s",&c);
        fclose(odi_mithun);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_mithun;
            odi_mithun = fopen("odi_mithun.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_mithun == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Mithun\n\n");

                fprintf(odi_mithun,"\t\t\t\t\t\t    Mohammad Mithun\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: March 2, 1991\n\tAge: 30\n\tBirth Place: Kushtia\n\tRole: Wicket-Keeper Batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_mithun);

                fprintf(odi_mithun,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_mithun,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_mithun,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_mithun);
                odi_mithun = fopen("odi_mithun.txt","r");
                while(1)
                {
                    c = fgetc(odi_mithun);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_mithun,"%s",&c);
                fclose(odi_mithun);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_sabbir()
{
    char c;
    FILE * odi_sabbir;
    odi_sabbir = fopen(" odi_sabbir.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 66;
    Innings = 59;
    Not_Out = 7;
    Runs = 1333;
    Ball_faced = 1461;
    Highest_Score = 102;
    hundred = 1;
    fifty = 6;
    Bowl_Match = 66;
    Bowl_Innings = 21;
    Ball = 306;
    conceded_Runs = 345;
    Wickets = 3;
    Best_Wickets = 1;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 37;
    Stumping = 0;
    Average = 25.63;
    Strike_Rate = 91.23;
    Economy = 6.76;
    Bowl_Average = 115.00;
    Bowl_Strike_Rate = 102.0;
    if ( odi_sabbir == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Sabbir Rahman\n\n");

        fprintf( odi_sabbir,"\t\t\t\t\t\t    Sabbir Rahman\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: November 22, 1991\n\tAge: 29\n\tBirth Place: Rajshahi\n\tRole: Middle–order batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Legbreak\n\n", odi_sabbir);

        fprintf( odi_sabbir,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf( odi_sabbir,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 1/12\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf( odi_sabbir,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose( odi_sabbir);
        odi_sabbir = fopen(" odi_sabbir.txt","r");
        while(1)
        {
            c = fgetc( odi_sabbir);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf( odi_sabbir,"%s",&c);
        fclose( odi_sabbir);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE * odi_sabbir;
            odi_sabbir = fopen(" odi_sabbir.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if ( odi_sabbir == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Sabbir Rahman\n\n");

                fprintf( odi_sabbir,"\t\t\t\t\t\t    Sabbir Rahman\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: November 22, 1991\n\tAge: 29\n\tBirth Place: Rajshahi\n\tRole: Middle–order batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Legbreak\n\n", odi_sabbir);

                fprintf( odi_sabbir,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf( odi_sabbir,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf( odi_sabbir,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose( odi_sabbir);
                odi_sabbir = fopen(" odi_sabbir.txt","r");
                while(1)
                {
                    c = fgetc( odi_sabbir);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf( odi_sabbir,"%s",&c);


                fclose( odi_sabbir);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_shakib()
{
    char c;
    FILE *odi_shakib;
    odi_shakib = fopen("odi_shakib.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 209;
    Innings = 197;
    Not_Out = 27;
    Runs = 6436;
    Ball_faced = 7815;
    Highest_Score = 134;
    hundred = 9;
    fifty =48;
    Bowl_Match = 209;
    Bowl_Innings = 206;
    Ball = 10650;
    conceded_Runs = 7907;
    Wickets = 266;
    Best_Wickets = 5;
    five_Wickets = 2;
    ten_Wickets = 0;
    Catch = 50;
    Stumping = 0;
    Average = 37.66;
    Strike_Rate = 82.35;
    Economy = 4.45;
    Bowl_Average = 29.73;
    Bowl_Strike_Rate = 40.04;
    if (odi_shakib == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Shakib Al Hasan\n\n");

        fprintf(odi_shakib,"\t\t\t\t\t\t    Shakib Al Hasan\n\t\t\t\t\t\t    ----------------\n\nPersonal Information:\n\n\tBorn: March 24, 1987\n\tAge: 34\n\tBirth Place: Magura\n\tRole: Allrounder\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Left-arm orthodox\n\n",odi_shakib);

        fprintf(odi_shakib,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_shakib,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 5/29\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_shakib,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_shakib);
        odi_shakib = fopen("odi_shakib.txt","r");
        while(1)
        {
            c = fgetc(odi_shakib);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_shakib,"%s",&c);
        fclose(odi_shakib);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_shakib;
            odi_shakib = fopen("odi_shakib.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_shakib == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Shakib Al Hasan\n\n");

                fprintf(odi_shakib,"\t\t\t\t\t\t    Shakib Al Hasan\n\t\t\t\t\t\t    ----------------\n\nPersonal Information:\n\n\tBorn: March 24, 1987\n\tAge: 34\n\tBirth Place: Magura\n\tRole: Allrounder\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Left-arm orthodox\n\n",odi_shakib);

                fprintf(odi_shakib,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_shakib,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_shakib,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_shakib);
                odi_shakib = fopen("odi_shakib.txt","r");
                while(1)
                {
                    c = fgetc(odi_shakib);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_shakib,"%s",&c);
                fclose(odi_shakib);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_riad()
{
    char c;
    FILE *odi_riad;
    odi_riad = fopen("odi_riad.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 94;
    Innings = 168;
    Not_Out = 45;
    Runs = 4262;
    Ball_faced = 5518;
    Highest_Score = 128;
    hundred = 3;
    fifty =23;
    Bowl_Match = 194;
    Bowl_Innings = 137;
    Ball = 4144;
    conceded_Runs = 3572;
    Wickets = 46;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 65;
    Stumping = 0;
    Average = 34.65;
    Strike_Rate = 77.28;
    Economy = 5.17;
    Bowl_Average = 47.00;
    Bowl_Strike_Rate = 54.5;
    if (odi_riad == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Mahmudullah\n\n");

        fprintf(odi_riad,"\t\t\t\t\t\t    Mohammad Mahmudullah\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: February 4, 1986\n\tAge: 35\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_riad);

        fprintf(odi_riad,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_riad,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/4\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_riad,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_riad);
        odi_riad = fopen("odi_riad.txt","r");
        while(1)
        {
            c = fgetc(odi_riad);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }
        fscanf(odi_riad,"%s",&c);
        fclose(odi_riad);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_riad;
            odi_riad = fopen("odi_riad.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }
            if (odi_riad == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Mahmudullah\n\n");

                fprintf(odi_riad,"\t\t\t\t\t\t    Mohammad Mahmudullah\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: February 4, 1986\n\tAge: 35\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_riad);

                fprintf(odi_riad,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_riad,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_riad,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_riad);
                odi_riad = fopen("odi_riad.txt","r");
                while(1)
                {
                    c = fgetc(odi_riad);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_riad,"%s",&c);
                fclose(odi_riad);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_miraz()
{
    char c;
    FILE *odi_miraz;
    odi_miraz = fopen("odi_miraz.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 47;
    Innings = 28;
    Not_Out = 4;
    Runs = 394;
    Ball_faced = 520;
    Highest_Score = 51;
    hundred = 0;
    fifty =1;
    Bowl_Match = 47;
    Bowl_Innings = 46;
    Ball = 2357;
    conceded_Runs = 1767;
    Wickets = 47;
    Best_Wickets = 4;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 15;
    Stumping = 0;
    Average = 16.41;
    Strike_Rate = 75.76;
    Economy = 4.49;
    Bowl_Average = 37.59;
    Bowl_Strike_Rate = 50.1;
    if (odi_miraz == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mehidy Hasan Miraz\n\n");

        fprintf(odi_miraz,"\t\t\t\t\t\t    Mehidy Hasan Miraz\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: October 25, 1997\n\tAge: 23\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_miraz);

        fprintf(odi_miraz,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_miraz,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 4/25\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_miraz,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_miraz);
        odi_miraz = fopen("odi_miraz.txt","r");
        while(1)
        {
            c = fgetc(odi_miraz);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_miraz,"%s",&c);
        fclose(odi_miraz);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_miraz;
            odi_miraz = fopen("odi_miraz.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_miraz == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mehidy Hasan Miraz\n\n");

                fprintf(odi_miraz,"\t\t\t\t\t\t    Mehidy Hasan Miraz\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: October 25, 1997\n\tAge: 23\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_miraz);

                fprintf(odi_miraz,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_miraz,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_miraz,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_miraz);
                odi_miraz = fopen("odi_miraz.txt","r");
                while(1)
                {
                    c = fgetc(odi_miraz);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }
                fscanf(odi_miraz,"%s",&c);
                fclose(odi_miraz);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_afif()
{
    char c;
    FILE *odi_afif;
    odi_afif = fopen("odi_afif.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 1;
    Innings = 1;
    Not_Out = 0;
    Runs = 7;
    Ball_faced = 4;
    Highest_Score = 7;
    hundred = 0;
    fifty =0;
    Bowl_Match = 1;
    Bowl_Innings = 1;
    Ball = 12;
    conceded_Runs = 12;
    Wickets = 1;
    Best_Wickets =1;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 7;
    Strike_Rate = 175.00;
    Economy = 6.0;
    Bowl_Average = 12.00;
    Bowl_Strike_Rate = 12.00;
    if (odi_afif == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Afif Hossain Dhrubo\n\n");

        fprintf(odi_afif,"\t\t\t\t\t\t    Afif Hossain Dhrubo\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: September 22, 1999\n\tAge: 21\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Left handed bat\n\tBowling Style: Right-arm offbreak\n\n",odi_afif);

        fprintf(odi_afif,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_afif,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 1/12\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_afif,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_afif);
        odi_afif = fopen("odi_afif.txt","r");
        while(1)
        {
            c = fgetc(odi_afif);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }
        fscanf(odi_afif,"%s",&c);
        fclose(odi_afif);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_afif;
            odi_afif = fopen("odi_afif.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }
            if (odi_afif == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Afif Hossain Dhrubo\n\n");

                fprintf(odi_afif,"\t\t\t\t\t\t    Afif Hossain Dhrubo\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: September 22, 1999\n\tAge: 21\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Left handed bat\n\tBowling Style: Right-arm offbreak\n\n",odi_afif);

                fprintf(odi_afif,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_afif,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_afif,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_afif);
                odi_afif = fopen("odi_afif.txt","r");
                while(1)
                {
                    c = fgetc(odi_afif);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }
                fscanf(odi_afif,"%s",&c);
                fclose(odi_afif);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_saikot()
{
    char c;
    FILE *odi_saikot;
    odi_saikot = fopen("odi_saikot.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 35;
    Innings = 30;
    Not_Out = 10;
    Runs = 549;
    Ball_faced = 629;
    Highest_Score = 52;
    hundred = 0;
    fifty =2;
    Bowl_Match = 35;
    Bowl_Innings = 33;
    Ball = 902;
    conceded_Runs = 787;
    Wickets = 14;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 13;
    Stumping = 0;
    Average = 27.45;
    Strike_Rate = 86.72;
    Economy = 5.23;
    Bowl_Average = 56.21;
    Bowl_Strike_Rate =64.4;
    if (odi_saikot == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mosaddek Hossain\n\n");

        fprintf(odi_saikot,"\t\t\t\t\t\t    Mosaddek Hossain\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: December 10, 1995\n\tAge: 22\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_saikot);

        fprintf(odi_saikot,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_saikot,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/13\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_saikot,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_saikot);
        odi_saikot = fopen("odi_saikot.txt","r");
        while(1)
        {
            c = fgetc(odi_saikot);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }
        fscanf(odi_saikot,"%s",&c);
        fclose(odi_saikot);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_saikot;
            odi_saikot = fopen("odi_saikot.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_saikot == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mosaddek Hossain\n\n");

                fprintf(odi_saikot,"\t\t\t\t\t\t    Mosaddek Hossain\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: December 10, 1995\n\tAge: 22\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",odi_saikot);

                fprintf(odi_saikot,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_saikot,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_saikot,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_saikot);
                odi_saikot = fopen("odi_saikot.txt","r");
                while(1)
                {
                    c = fgetc(odi_saikot);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_saikot,"%s",&c);
                fclose(odi_saikot);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_saifuddin()
{
    char c;
    FILE *odi_saifuddin;
    odi_saifuddin = fopen("odi_saifuddin.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 24;
    Innings = 15;
    Not_Out = 6;
    Runs = 302;
    Ball_faced = 343;
    Highest_Score = 53;
    hundred = 0;
    fifty =2;
    Bowl_Match = 24;
    Bowl_Innings = 24;
    Ball = 1091;
    conceded_Runs = 1066;
    Wickets = 34;
    Best_Wickets = 4;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 3;
    Stumping = 0;
    Average = 33.55;
    Strike_Rate = 88.04;
    Economy = 5.86;
    Bowl_Average = 31.35;
    Bowl_Strike_Rate =22.8;
    if (odi_saifuddin == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Saifuddin\n\n");

        fprintf(odi_saifuddin,"\t\t\t\t\t\t    Mohammad Saifuddin\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: November 1, 1996\n\tAge: 24\n\tBirth Place: Feni\n\tRole: Allrounder\n\tBatting Style: Left-handed bat\n\tBowling Style: Right-arm medium-fast\n\n",odi_saifuddin);

        fprintf(odi_saifuddin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_saifuddin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 4/41\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_saifuddin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_saifuddin);
        odi_saifuddin = fopen("odi_saifuddin.txt","r");
        while(1)
        {
            c = fgetc(odi_saifuddin);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_saifuddin,"%s",&c);
        fclose(odi_saifuddin);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;
        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_saifuddin;
            odi_saifuddin = fopen("odi_saifuddin.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_saifuddin == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Saifuddin\n\n");

                fprintf(odi_saifuddin,"\t\t\t\t\t\t    Mohammad Saifuddin\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: November 1, 1996\n\tAge: 24\n\tBirth Place: Feni\n\tRole: Allrounder\n\tBatting Style: Left-handed bat\n\tBowling Style: Right-arm medium-fast\n\n",odi_saifuddin);

                fprintf(odi_saifuddin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_saifuddin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_saifuddin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_saifuddin);
                odi_saifuddin = fopen("odi_saifuddin.txt","r");
                while(1)
                {
                    c = fgetc(odi_saifuddin);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_saifuddin,"%s",&c);
                fclose(odi_saifuddin);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_mahidy()
{
    char c;
    FILE *odi_mahidy;
    odi_mahidy = fopen("odi_mahidy.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 3;
    Innings = 3;
    Not_Out = 0;
    Runs = 24;
    Ball_faced = 33;
    Highest_Score = 14;
    hundred = 0;
    fifty =2;
    Bowl_Match = 3;
    Bowl_Innings = 3;
    Ball = 138;
    conceded_Runs = 105;
    Wickets = 2;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 3;
    Stumping = 0;
    Average = 8.00;
    Strike_Rate = 72.72;
    Economy = 4.56;
    Bowl_Average = 52.50;
    Bowl_Strike_Rate = 69.0;
    if (odi_mahidy == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Sheikh Mahedi\n\n");

        fprintf(odi_mahidy,"\t\t\t\t\t\t    Sheikh Mahedi\n\t\t\t\t\t\t    ------------\n\nPersonal Information:\n\n\tBorn: December 12, 1994\n\tAge: 26\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right-handed bat\n\tBowling Style: Right-arm offbreak\n\n",odi_mahidy);

        fprintf(odi_mahidy,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_mahidy,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/42\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_mahidy,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_mahidy);
        odi_mahidy = fopen("odi_mahidy.txt","r");
        while(1)
        {
            c = fgetc(odi_mahidy);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_mahidy,"%s",&c);
        fclose(odi_mahidy);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_mahidy;
            odi_mahidy = fopen("odi_mahidy.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_mahidy == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Sheikh Mahedi\n\n");

                fprintf(odi_mahidy,"\t\t\t\t\t\t    Sheikh Mahedi\n\t\t\t\t\t\t    ------------\n\nPersonal Information:\n\n\tBorn: December 12, 1994\n\tAge: 26\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right-handed bat\n\tBowling Style: Right-arm offbreak\n\n",odi_mahidy);

                fprintf(odi_mahidy,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_mahidy,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_mahidy,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_mahidy);
                odi_mahidy = fopen("odi_mahidy.txt","r");
                while(1)
                {
                    c = fgetc(odi_mahidy);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_mahidy,"%s",&c);
                fclose(odi_mahidy);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_mustafiz()
{
    char c;
    FILE *odi_mustafiz;
    odi_mustafiz = fopen("odi_mustafiz.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 64;
    Innings = 29;
    Not_Out = 18;
    Runs = 79;
    Ball_faced = 149;
    Highest_Score = 16;
    hundred = 0;
    fifty =0;
    Bowl_Match = 64;
    Bowl_Innings = 63;
    Ball = 3140;
    conceded_Runs = 2746;
    Wickets = 118;
    Best_Wickets = 6;
    five_Wickets = 5;
    ten_Wickets = 0;
    Catch = 13;
    Stumping = 0;
    Average = 7.18;
    Strike_Rate = 56.42;
    Economy = 5.24;
    Bowl_Average = 23.27;
    Bowl_Strike_Rate =67.1;
    if (odi_mustafiz == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mustafizur Rahman\n\n");

        fprintf(odi_mustafiz,"\t\t\t\t\t\t    Mustafizur Rahman\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: September 6, 1995\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Left-arm fast-medium\n\n",odi_mustafiz);

        fprintf(odi_mustafiz,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_mustafiz,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 6/43\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_mustafiz,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_mustafiz);
        odi_mustafiz = fopen("odi_mustafiz.txt","r");
        while(1)
        {
            c = fgetc(odi_mustafiz);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_mustafiz,"%s",&c);
        fclose(odi_mustafiz);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_mustafiz;
            odi_mustafiz = fopen("odi_mustafiz.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_mustafiz == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mustafizur Rahman\n\n");

                fprintf(odi_mustafiz,"\t\t\t\t\t\t    Mustafizur Rahman\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: September 6, 1995\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Left-arm fast-medium\n\n",odi_mustafiz);

                fprintf(odi_mustafiz,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_mustafiz,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_mustafiz,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_mustafiz);
                odi_mustafiz = fopen("odi_mustafiz.txt","r");
                while(1)
                {
                    c = fgetc(odi_mustafiz);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_mustafiz,"%s",&c);
                fclose(odi_mustafiz);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_mashrafee()
{
    char c;
    FILE *odi_mashrafee;
    odi_mashrafee = fopen("odi_mashrafee.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 220;
    Innings = 158;
    Not_Out = 28;
    Runs = 1787;
    Ball_faced = 2041;
    Highest_Score = 51;
    hundred = 0;
    fifty =1;
    Bowl_Match = 220;
    Bowl_Innings = 220;
    Ball = 10922;
    conceded_Runs = 8893;
    Wickets = 270;
    Best_Wickets = 6;
    five_Wickets = 1;
    ten_Wickets = 0;
    Catch = 62;
    Stumping = 0;
    Average = 13.74;
    Strike_Rate = 87.55;
    Economy = 4.88;
    Bowl_Average = 32.93;
    Bowl_Strike_Rate =40.4;
    if (odi_mashrafee == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mashrafe Bin Mortaza\n\n");

        fprintf(odi_mashrafee,"\t\t\t\t\t\t    Mashrafe Bin Mortaza\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: October 5, 1983\n\tAge: 37\n\tBirth Place: Norail\n\tRole: Bowler\n\tBatting Style:Right-handed bat\n\tBowling Style: Left-arm fast-medium\n\n",odi_mashrafee);

        fprintf(odi_mashrafee,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_mashrafee,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 6/26\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_mashrafee,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_mashrafee);
        odi_mashrafee = fopen("odi_mashrafee.txt","r");
        while(1)
        {
            c = fgetc(odi_mashrafee);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_mashrafee,"%s",&c);
        fclose(odi_mashrafee);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_mashrafee;
            odi_mashrafee = fopen("odi_mashrafee.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_mashrafee == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mashrafe Bin Mortaza\n\n");

                fprintf(odi_mashrafee,"\t\t\t\t\t\t    Mashrafe Bin Mortaza\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: October 5, 1983\n\tAge: 37\n\tBirth Place: Norail\n\tRole: Bowler\n\tBatting Style:Right-handed bat\n\tBowling Style: Left-arm fast-medium\n\n",odi_mashrafee);

                fprintf(odi_mashrafee,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_mashrafee,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_mashrafee,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_mashrafee);
                odi_mashrafee = fopen("odi_mashrafee.txt","r");
                while(1)
                {
                    c = fgetc(odi_mashrafee);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_mashrafee,"%s",&c);
                fclose(odi_mashrafee);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_rubel()
{
    char c;
    FILE *odi_rubel;
    odi_rubel = fopen("odi_rubel.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 104;
    Innings = 53;
    Not_Out = 24;
    Runs = 144;
    Ball_faced = 277;
    Highest_Score = 17;
    hundred = 0;
    fifty =0;
    Bowl_Match = 104;
    Bowl_Innings = 102;
    Ball = 4678;
    conceded_Runs = 4427;
    Wickets = 129;
    Best_Wickets = 6;
    five_Wickets = 1;
    ten_Wickets = 0;
    Catch = 20;
    Stumping = 0;
    Average = 4.96;
    Strike_Rate = 51.98;
    Economy = 5.67;
    Bowl_Average = 34.31;
    Bowl_Strike_Rate =36.2;
    if (odi_rubel == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Rubel Hossain\n\n");

        fprintf(odi_rubel,"\t\t\t\t\t\t    Rubel Hossain\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Bagerhat\n\tRole: Bowler\n\tBatting Style:Right-handed bat\n\tBowling Style: Right-arm fast\n\n",odi_rubel);

        fprintf(odi_rubel,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_rubel,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 6/26\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_rubel,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_rubel);
        odi_rubel = fopen("odi_rubel.txt","r");
        while(1)
        {
            c = fgetc(odi_rubel);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }
        fscanf(odi_rubel,"%s",&c);
        fclose(odi_rubel);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_rubel;
            odi_rubel = fopen("odi_rubel.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_rubel == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Rubel Hossain\n\n");

                fprintf(odi_rubel,"\t\t\t\t\t\t    Rubel Hossain\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Bagerhat\n\tRole: Bowler\n\tBatting Style:Right-handed bat\n\tBowling Style: Right-arm fast\n\n",odi_rubel);

                fprintf(odi_rubel,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_rubel,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_rubel,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_rubel);
                odi_rubel = fopen("odi_rubel.txt","r");
                while(1)
                {
                    c = fgetc(odi_rubel);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_rubel,"%s",&c);
                fclose(odi_rubel);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_shafiul()
{
    char c;
    FILE *odi_shafiul;
    odi_shafiul = fopen("odi_shafiul.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 60;
    Innings = 34;
    Not_Out = 12;
    Runs = 134;
    Ball_faced = 240;
    Highest_Score = 24;
    hundred = 0;
    fifty =0;
    Bowl_Match = 60;
    Bowl_Innings = 60;
    Ball = 2540;
    conceded_Runs = 2529;
    Wickets = 70;
    Best_Wickets = 4;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 8;
    Stumping = 0;
    Average = 6.09;
    Strike_Rate = 55.83;
    Economy = 5.97;
    Bowl_Average = 36.12;
    Bowl_Strike_Rate =102.0;
    if (odi_shafiul == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Shafiul Islam\n\n");

        fprintf(odi_shafiul,"\t\t\t\t\t\t    Shafiul Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: October 6, 1989\n\tAge: 31\n\tBirth Place: Bogra\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",odi_shafiul);

        fprintf(odi_shafiul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_shafiul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 4/21\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_shafiul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_shafiul);
        odi_shafiul = fopen("odi_shafiul.txt","r");
        while(1)
        {
            c = fgetc(odi_shafiul);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_shafiul,"%s",&c);
        fclose(odi_shafiul);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_shafiul;
            odi_shafiul = fopen("odi_shafiul.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_shafiul == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Shafiul Islam\n\n");

                fprintf(odi_shafiul,"\t\t\t\t\t\t    Shafiul Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: October 6, 1989\n\tAge: 31\n\tBirth Place: Bogra\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",odi_shafiul);

                fprintf(odi_shafiul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_shafiul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_shafiul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_shafiul);
                odi_shafiul = fopen("odi_shafiul.txt","r");
                while(1)
                {
                    c = fgetc(odi_shafiul);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_shafiul,"%s",&c);
                fclose(odi_shafiul);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_al_amin()
{
    char c;
    FILE *odi_al_amin;
    odi_al_amin = fopen("odi_al_amin.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 15;
    Innings = 7;
    Not_Out = 5;
    Runs = 4;
    Ball_faced = 20;
    Highest_Score = 2;
    hundred = 0;
    fifty =0;
    Bowl_Match = 15;
    Bowl_Innings = 15;
    Ball = 663;
    conceded_Runs = 608;
    Wickets = 22;
    Best_Wickets = 4;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 1;
    Stumping = 0;
    Average = 2.00;
    Strike_Rate = 20.00;
    Economy = 5.50;
    Bowl_Average = 27.63;
    Bowl_Strike_Rate =30.1;
    if (odi_al_amin == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Al-Amin Hossain\n\n");

        fprintf(odi_al_amin,"\t\t\t\t\t\t    Al-Amin Hossain\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Jhnidah\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",odi_al_amin);

        fprintf(odi_al_amin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_al_amin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 4/51\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_al_amin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_al_amin);
        odi_al_amin = fopen("odi_al_amin.txt","r");
        while(1)
        {
            c = fgetc(odi_al_amin);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_al_amin,"%s",&c);
        fclose(odi_al_amin);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_al_amin;
            odi_al_amin = fopen("odi_al_amin.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_al_amin == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Al-Amin Hossain\n\n");

                fprintf(odi_al_amin,"\t\t\t\t\t\t    Al-Amin Hossain\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Jhnidah\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",odi_al_amin);

                fprintf(odi_al_amin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_al_amin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_al_amin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_al_amin);
                odi_al_amin = fopen("odi_al_amin.txt","r");
                while(1)
                {

                    c = fgetc(odi_al_amin);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_al_amin,"%s",&c);
                fclose(odi_al_amin);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_taskin()
{
    char c;
    FILE *odi_taskin;
    odi_taskin = fopen("odi_taskin.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 36;
    Innings = 18;
    Not_Out = 6;
    Runs = 60;
    Ball_faced = 155;
    Highest_Score = 14;
    hundred = 0;
    fifty =0;
    Bowl_Match = 36;
    Bowl_Innings = 35;
    Ball = 1607;
    conceded_Runs = 1525;
    Wickets = 48;
    Best_Wickets = 5;
    five_Wickets = 1;
    ten_Wickets = 0;
    Catch = 8;
    Stumping = 0;
    Average = 5.00;
    Strike_Rate = 38.70;
    Economy = 5.88;
    Bowl_Average = 32.81;
    Bowl_Strike_Rate =33.4;
    if (odi_taskin == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Taskin Ahmed\n\n");

        fprintf(odi_taskin,"\t\t\t\t\t\t    Taskin Ahmed\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: April 3, 1995\n\tAge: 25\n\tBirth Place: Dhaka\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Right-arm fast\n\n",odi_taskin);

        fprintf(odi_taskin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_taskin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 5/28\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_taskin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_taskin);
        odi_taskin = fopen("odi_taskin.txt","r");
        while(1)
        {
            c = fgetc(odi_taskin);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_taskin,"%s",&c);
        fclose(odi_taskin);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_taskin;
            odi_taskin = fopen("odi_taskin.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_taskin == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Taskin Ahmed\n\n");

                fprintf(odi_taskin,"\t\t\t\t\t\t    Taskin Ahmed\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: April 3, 1995\n\tAge: 25\n\tBirth Place: Dhaka\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Right-arm fast\n\n",odi_taskin);

                fprintf(odi_taskin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_taskin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_taskin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_taskin);
                odi_taskin = fopen("odi_taskin.txt","r");
                while(1)
                {
                    c = fgetc(odi_taskin);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_taskin,"%s",&c);
                fclose(odi_taskin);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_taijul()
{
    char c;
    FILE *odi_taijul;
    odi_taijul = fopen("odi_taijul.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 9;
    Innings = 5;
    Not_Out = 1;
    Runs = 63;
    Ball_faced = 78;
    Highest_Score = 39;
    hundred = 0;
    fifty =0;
    Bowl_Match = 9;
    Bowl_Innings = 9;
    Ball = 510;
    conceded_Runs = 337;
    Wickets = 12;
    Best_Wickets = 4;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 1;
    Stumping = 0;
    Average = 15.75;
    Strike_Rate = 80.96;
    Economy = 3.96;
    Bowl_Average = 28.08;
    Bowl_Strike_Rate =42.5;
    if (odi_taijul == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Taijul Islam\n\n");

        fprintf(odi_taijul,"\t\t\t\t\t\t    Taijul Islam\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 7, 1992\n\tAge: 29\n\tBirth Place: Natore\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",odi_taijul);

        fprintf(odi_taijul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_taijul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 4/11\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_taijul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_taijul);
        odi_taijul = fopen("odi_taijul.txt","r");
        while(1)
        {
            c = fgetc(odi_taijul);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }

        fscanf(odi_taijul,"%s",&c);
        fclose(odi_taijul);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_taijul;
            odi_taijul = fopen("odi_taijul.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_taijul == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Taijul Islam\n\n");

                fprintf(odi_taijul,"\t\t\t\t\t\t    Taijul Islam\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: February 7, 1992\n\tAge: 29\n\tBirth Place: Natore\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Slow left-arm orthodox\n\n",odi_taijul);

                fprintf(odi_taijul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_taijul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_taijul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_taijul);
                odi_taijul = fopen("odi_taijul.txt","r");
                while(1)
                {
                    c = fgetc(odi_taijul);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_taijul,"%s",&c);
                fclose(odi_taijul);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_rahi()
{
    char c;
    FILE *odi_rahi;
    odi_rahi = fopen("odi_rahi.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 2;
    Innings = 0;
    Not_Out = 0;
    Runs = 0;
    Ball_faced = 0;
    Highest_Score = 0;
    hundred = 0;
    fifty =0;
    Bowl_Match = 2;
    Bowl_Innings = 2;
    Ball = 108;
    conceded_Runs = 114;
    Wickets = 5;
    Best_Wickets = 5;
    five_Wickets = 1;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 0;
    Strike_Rate = 0;
    Economy = 6.33;
    Bowl_Average = 22.80;
    Bowl_Strike_Rate =21.6;
    if (odi_rahi == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Abu Jayed\n\n");

        fprintf(odi_rahi,"\t\t\t\t\t\t    Abu Jayed\n\t\t\t\t\t\t    ---------\n\nPersonal Information:\n\n\tBorn: August 2, 1993\n\tAge: 27\n\tBirth Place: Sylhet\n\tRole: Bowler\n\tBatting Style:Right-handed bat\n\tBowling Style: Right-arm fast\n\n",odi_rahi);

        fprintf(odi_rahi,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_rahi,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 5/58\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_rahi,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_rahi);
        odi_rahi = fopen("odi_rahi.txt","r");
        while(1)
        {
            c = fgetc(odi_rahi);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_rahi,"%s",&c);
        fclose(odi_rahi);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_rahi;
            odi_rahi = fopen("odi_rahi.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_rahi == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Abu Jayed\n\n");

                fprintf(odi_rahi,"\t\t\t\t\t\t    Abu Jayed\n\t\t\t\t\t\t    ---------\n\nPersonal Information:\n\n\tBorn: August 2, 1993\n\tAge: 27\n\tBirth Place: Sylhet\n\tRole: Bowler\n\tBatting Style:Right-handed bat\n\tBowling Style: Right-arm fast\n\n",odi_rahi);

                fprintf(odi_rahi,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_rahi,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_rahi,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_rahi);
                odi_rahi = fopen("odi_rahi.txt","r");
                while(1)
                {
                    c = fgetc(odi_rahi);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);

                }
                fscanf(odi_rahi,"%s",&c);
                fclose(odi_rahi);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_shoriful()
{
    char c;
    FILE *odi_shoriful;
    odi_shoriful = fopen("odi_shoriful.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 0;
    Innings = 0;
    Not_Out = 0;
    Runs = 0;
    Ball_faced = 0;
    Highest_Score = 0;
    hundred = 0;
    fifty =0;
    Bowl_Match = 0;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 0;
    Strike_Rate = 0;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate =0;
    if (odi_shoriful == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Shoriful Islam\n\n");

        fprintf(odi_shoriful,"\t\t\t\t\t\t    Shoriful Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: June 3, 2001\n\tAge: 19\n\tBirth Place: Panchagor\n\tRole: Bowler\n\tBatting Style: Left-handed bat\n\tBowling Style: Left-arm medium-fast\n\n",odi_shoriful);

        fprintf(odi_shoriful,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_shoriful,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_shoriful,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_shoriful);
        odi_shoriful = fopen("odi_shoriful.txt","r");
        while(1)
        {
            c = fgetc(odi_shoriful);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_shoriful,"%s",&c);
        fclose(odi_shoriful);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_shoriful;
            odi_shoriful = fopen("odi_shoriful.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_shoriful == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Shoriful Islam\n\n");

                fprintf(odi_shoriful,"\t\t\t\t\t\t    Shoriful Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: June 3, 2001\n\tAge: 19\n\tBirth Place: Panchagor\n\tRole: Bowler\n\tBatting Style: Left-handed bat\n\tBowling Style: Left-arm medium-fast\n\n",odi_shoriful);

                fprintf(odi_shoriful,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_shoriful,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_shoriful,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_shoriful);
                odi_shoriful = fopen("odi_shoriful.txt","r");
                while(1)
                {
                    c = fgetc(odi_shoriful);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_shoriful,"%s",&c);
                fclose(odi_shoriful);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void odi_h_mahmud()
{
    char c;
    FILE *odi_h_mahmud;
    odi_h_mahmud = fopen("odi_h_mahmud.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 3;
    Innings = 1;
    Not_Out = 0;
    Runs = 1;
    Ball_faced = 5;
    Highest_Score = 1;
    hundred = 0;
    fifty =0;
    Bowl_Match = 3;
    Bowl_Innings = 3;
    Ball = 116;
    conceded_Runs = 131;
    Wickets = 5;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 1.00;
    Strike_Rate = 20.00;
    Economy = 6.77;
    Bowl_Average = 26.20;
    Bowl_Strike_Rate =23.2;
    if (odi_h_mahmud == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Hasan Mahmud\n\n");

        fprintf(odi_h_mahmud,"\t\t\t\t\t\t    Hasan Mahmud\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: October 12, 1999\n\tAge: 21\n\tBirth Place: Laxmipur\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",odi_h_mahmud);

        fprintf(odi_h_mahmud,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(odi_h_mahmud,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/28\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(odi_h_mahmud,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(odi_h_mahmud);
        odi_h_mahmud = fopen("odi_h_mahmud.txt","r");
        while(1)
        {
            c = fgetc(odi_h_mahmud);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(odi_h_mahmud,"%s",&c);
        fclose(odi_h_mahmud);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *odi_h_mahmud;
            odi_h_mahmud = fopen("odi_h_mahmud.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (odi_h_mahmud == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Hasan Mahmud\n\n");

                fprintf(odi_h_mahmud,"\t\t\t\t\t\t    Hasan Mahmud\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: October 12, 1999\n\tAge: 21\n\tBirth Place: Laxmipur\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",odi_h_mahmud);

                fprintf(odi_h_mahmud,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(odi_h_mahmud,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(odi_h_mahmud,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(odi_h_mahmud);
                odi_h_mahmud = fopen("odi_h_mahmud.txt","r");
                while(1)
                {
                    c = fgetc(odi_h_mahmud);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(odi_h_mahmud,"%s",&c);
                fclose(odi_h_mahmud);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

//T20
void t20_tamim()
{
    char c;
    FILE *t20_tamim;
    t20_tamim = fopen("t20_tamim.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 78;
    Innings = 78;
    Not_Out = 5;
    Runs = 1758;
    Ball_faced = 1500;
    Highest_Score =103;
    hundred = 1;
    fifty = 7;
    Bowl_Match = 78;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 18;
    Stumping = 0;
    Average =24.08 ;
    Strike_Rate = 117.2;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (t20_tamim == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Tamim Iqbal\n\n");

        fprintf(t20_tamim,"\t\t\t\t\t\t     Tamim Iqbal\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: March 20, 1989\n\tAge: 32\n\tBirth Place: Chittagong\n\tRole: Opening Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",t20_tamim);

        fprintf(t20_tamim,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_tamim,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_tamim,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_tamim);
        t20_tamim = fopen("t20_tamim.txt","r");
        while(1)
        {
            c = fgetc(t20_tamim);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_tamim,"%s",&c);
        fclose(t20_tamim);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_tamim;
            t20_tamim = fopen("t20_tamim.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_tamim == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Tamim Iqbal\n\n");

                fprintf(t20_tamim,"\t\t\t\t\t\t     Tamim Iqbal\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: March 20, 1989\n\tAge: 32\n\tBirth Place: Chittagong\n\tRole: Opening Batsman\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",t20_tamim);

                fprintf(t20_tamim,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_tamim,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_tamim,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_tamim);
                t20_tamim = fopen("t20_tamim.txt","r");
                while(1)
                {
                    c = fgetc(t20_tamim);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_tamim,"%s",&c);
                fclose(t20_tamim);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_liton()
{
    char c;
    FILE *t20_liton;
    t20_liton = fopen("t20_liton.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 31;
    Innings = 31;
    Not_Out = 1;
    Runs = 646;
    Ball_faced = 482;
    Highest_Score =61;
    hundred = 0;
    fifty = 4;
    Bowl_Match = 31;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs = 0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 18;
    Stumping = 1;
    Average =21.53 ;
    Strike_Rate = 134.3;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (t20_liton == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Liton Das\n\n");

        fprintf(t20_liton,"\t\t\t\t\t\t     Liton Das\n\t\t\t\t\t\t    -----------\n\nPersonal Information:\n\n\tBorn: October 13, 1994\n\tAge: 26\n\tBirth Place: Dinajpur\n\tRole: Wicket-keeper batsman\n\tBatting Style: Right Handed Bat\n\n",t20_liton);

        fprintf(t20_liton,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_liton,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_liton,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_liton);
        t20_liton = fopen("t20_liton.txt","r");
        while(1)
        {
            c = fgetc(t20_liton);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_liton,"%s",&c);
        fclose(t20_liton);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_liton;
            t20_liton = fopen("t20_liton.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_liton == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of  Liton Das\n\n");

                fprintf(t20_liton,"\t\t\t\t\t\t     Liton Das\n\t\t\t\t\t\t    -----------\n\nPersonal Information:\n\n\tBorn: October 13, 1994\n\tAge: 26\n\tBirth Place: Dinajpur\n\tRole: Wicket-keeper batsman\n\tBatting Style: Right Handed Bat\n\n",t20_liton);

                fprintf(t20_liton,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_liton,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_liton,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_liton);
                t20_liton = fopen("t20_liton.txt","r");
                while(1)
                {
                    c = fgetc(t20_liton);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_liton,"%s",&c);
                fclose(t20_liton);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_soumya()
{
    char c;
    FILE *t20_soumya;
    t20_soumya = fopen("t20_soumya.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 52;
    Innings = 52;
    Not_Out = 3;
    Runs = 941;
    Ball_faced = 743;
    Highest_Score =62;
    hundred = 0;
    fifty = 3;
    Bowl_Match = 52;
    Bowl_Innings = 14;
    Ball = 156;
    conceded_Runs =271;
    Wickets = 6;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 28;
    Stumping = 0;
    Average =19.20 ;
    Strike_Rate = 127.33;
    Economy = 10.42;
    Bowl_Average = 45.17;
    Bowl_Strike_Rate = 26.0;
    if (t20_soumya == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Soumya Sarkar\n\n");

        fprintf(t20_soumya,"\t\t\t\t\t\t     Soumya Sarkar\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: February 25, 1993\n\tAge: 28\n\tBirth Place: Satkhira\n\tRole: Allrounder\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm medium\n\n",t20_soumya);

        fprintf(t20_soumya,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_soumya,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/29\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_soumya,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_soumya);
        t20_soumya = fopen("t20_soumya.txt","r");
        while(1)
        {
            c = fgetc(t20_soumya);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }
        fscanf(t20_soumya,"%s",&c);
        fclose(t20_soumya);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_soumya;
            t20_soumya = fopen("t20_soumya.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }
            if (t20_soumya == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Soumya Sarkar\n\n");

                fprintf(t20_soumya,"\t\t\t\t\t\t     Soumya Sarkar\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: February 25, 1993\n\tAge: 28\n\tBirth Place: Satkhira\n\tRole: Allrounder\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Right-arm medium\n\n",t20_soumya);

                fprintf(t20_soumya,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_soumya,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_soumya,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_soumya);
                t20_soumya = fopen("t20_soumya.txt","r");
                while(1)
                {
                    c = fgetc(t20_soumya);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);

                }
                fscanf(t20_soumya,"%s",&c);
                fclose(t20_soumya);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_naim()
{
    char c;
    FILE *t20_naim;
    t20_naim = fopen("t20_naim.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 9;
    Innings = 9;
    Not_Out = 0;
    Runs = 303;
    Ball_faced = 249;
    Highest_Score =81;
    hundred = 0;
    fifty = 1;
    Bowl_Match = 9;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs =0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 5;
    Stumping = 0;
    Average =33.66 ;
    Strike_Rate = 121.68;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (t20_naim == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Naim Sheikh\n\n");

        fprintf(t20_naim,"\t\t\t\t\t\t     Mohammad Naim Sheikh\n\t\t\t\t\t\t    ---------------------\n\nPersonal Information:\n\n\tBorn: August 22, 1999\n\tAge: 21\n\tBirth Place: Dhaka\n\tRole: Left Handed Opening Batsman\n\tBatting Style: Left-Handed Bat\n\n",t20_naim);

        fprintf(t20_naim,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_naim,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_naim,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_naim);
        t20_naim = fopen("t20_naim.txt","r");
        while(1)
        {
            c = fgetc(t20_naim);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_naim,"%s",&c);
        fclose(t20_naim);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_naim;
            t20_naim = fopen("t20_naim.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_naim == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Naim Sheikh\n\n");

                fprintf(t20_naim,"\t\t\t\t\t\t     Mohammad Naim Sheikh\n\t\t\t\t\t\t    ---------------------\n\nPersonal Information:\n\n\tBorn: August 22, 1999\n\tAge: 21\n\tBirth Place: Dhaka\n\tRole: Left Handed Opening Batsman\n\tBatting Style: Left-Handed Bat\n\n",t20_naim);

                fprintf(t20_naim,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_naim,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_naim,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_naim);
                t20_naim = fopen("t20_naim.txt","r");
                while(1)
                {
                    c = fgetc(t20_naim);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_naim,"%s",&c);
                fclose(t20_naim);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_mushfiq()
{
    char c;
    FILE *t20_mushfiq;
    t20_mushfiq = fopen("t20_mushfiq.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 86;
    Innings = 77;
    Not_Out = 12;
    Runs = 1282;
    Ball_faced = 1069;
    Highest_Score =72;
    hundred = 0;
    fifty = 5;
    Bowl_Match = 86;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs =0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch =33;
    Stumping = 29;
    Average =19.72 ;
    Strike_Rate = 119.93;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (t20_mushfiq == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mushfiqur Rahim\n\n");

        fprintf(t20_mushfiq,"\t\t\t\t\t\t     Mushfiqur Rahim\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: May 09, 1987\n\tAge: 33\n\tBirth Place: Bogra\n\tRole: Wicket-keeper batsman\n\tBatting Style: Right handed bat\n\n",t20_mushfiq);

        fprintf(t20_mushfiq,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_mushfiq,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_mushfiq,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_mushfiq);
        t20_mushfiq = fopen("t20_mushfiq.txt","r");
        while(1)
        {
            c = fgetc(t20_mushfiq);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_mushfiq,"%s",&c);
        fclose(t20_mushfiq);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_mushfiq;
            t20_mushfiq = fopen("t20_mushfiq.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_mushfiq == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mushfiqur Rahim\n\n");

                fprintf(t20_mushfiq,"\t\t\t\t\t\t     Mushfiqur Rahim\n\t\t\t\t\t\t    -----------------\n\nPersonal Information:\n\n\tBorn: May 09, 1987\n\tAge: 33\n\tBirth Place: Bogra\n\tRole: Wicket-keeper batsman\n\tBatting Style: Right handed bat\n\n",t20_mushfiq);

                fprintf(t20_mushfiq,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_mushfiq,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_mushfiq,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_mushfiq);
                t20_mushfiq = fopen("t20_mushfiq.txt","r");
                while(1)
                {
                    c = fgetc(t20_mushfiq);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_mushfiq,"%s",&c);
                fclose(t20_mushfiq);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_shanto()
{
    char c;
    FILE *t20_shanto;
    t20_shanto = fopen("t20_shanto.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 3;
    Innings = 3;
    Not_Out = 0;
    Runs = 24;
    Ball_faced = 23;
    Highest_Score =11;
    hundred = 0;
    fifty = 0;
    Bowl_Match = 3;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs =0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch= 0;
    Stumping = 29;
    Average =8.00 ;
    Strike_Rate = 104.34;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (t20_shanto == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Najmul Hossain Shanto\n\n");

        fprintf(t20_shanto,"\t\t\t\t\t\t     Najmul Hossain Shanto\n\t\t\t\t\t\t    -----------------------\n\nPersonal Information:\n\n\tBorn: August 25, 1998\n\tAge: 22\n\tBirth Place: Rajshahi\n\tRole: Middle – order batsman\n\tBatting Style: Left handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_shanto);

        fprintf(t20_shanto,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_shanto,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_shanto,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_shanto);
        t20_shanto = fopen("t20_shanto.txt","r");
        while(1)
        {
            c = fgetc(t20_shanto);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_shanto,"%s",&c);
        fclose(t20_shanto);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_shanto;
            t20_shanto = fopen("t20_shanto.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_shanto == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Najmul Hossain Shanto\n\n");

                fprintf(t20_shanto,"\t\t\t\t\t\t     Najmul Hossain Shanto\n\t\t\t\t\t\t    -----------------------\n\nPersonal Information:\n\n\tBorn: August 25, 1998\n\tAge: 22\n\tBirth Place: Rajshahi\n\tRole: Middle – order batsman\n\tBatting Style: Left handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_shanto);

                fprintf(t20_shanto,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_shanto,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_shanto,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_shanto);
                t20_shanto = fopen("t20_shanto.txt","r");
                while(1)
                {
                    c = fgetc(t20_shanto);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_shanto,"%s",&c);
                fclose(t20_shanto);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void   t20_mithun()
{
    char c;
    FILE *t20_mithun;
    t20_mithun = fopen("t20_mithun.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 17;
    Innings = 13;
    Not_Out = 1;
    Runs = 127;
    Ball_faced = 136;
    Highest_Score =47;
    hundred = 0;
    fifty = 0;
    Bowl_Match = 17;
    Bowl_Innings = 0;
    Ball = 0;
    conceded_Runs =0;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch= 4;
    Stumping = 0;
    Average =10.58 ;
    Strike_Rate = 93.38;
    Economy = 0;
    Bowl_Average = 0;
    Bowl_Strike_Rate = 0;
    if (t20_mithun == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Mithun\n\n");

        fprintf(t20_mithun,"\t\t\t\t\t\t     Mohammad Mithun\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: March 2, 1991\n\tAge: 30\n\tBirth Place: Kushtia\n\tRole: Wicket-keeper batsman\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_mithun);

        fprintf(t20_mithun,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_mithun,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/0\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_mithun,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_mithun);
        t20_mithun = fopen("t20_mithun.txt","r");
        while(1)
        {
            c = fgetc(t20_mithun);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }

        fscanf(t20_mithun,"%s",&c);
        fclose(t20_mithun);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_mithun;
            t20_mithun = fopen("t20_mithun.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_mithun == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Mithun\n\n");

                fprintf(t20_mithun,"\t\t\t\t\t\t     Mohammad Mithun\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: March 2, 1991\n\tAge: 30\n\tBirth Place: Kushtia\n\tRole: Wicket-keeper batsman\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_mithun);

                fprintf(t20_mithun,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_mithun,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_mithun,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_mithun);
                t20_mithun = fopen("t20_mithun.txt","r");
                while(1)
                {
                    c = fgetc(t20_mithun);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);

                }

                fscanf(t20_mithun,"%s",&c);
                fclose(t20_mithun);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_sabbir()
{
    char c;
    FILE *t20_sabbir;
    t20_sabbir = fopen("t20_sabbir.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 44;
    Innings = 43;
    Not_Out = 5;
    Runs = 946;
    Ball_faced = 783;
    Highest_Score =80;
    hundred = 0;
    fifty = 4;
    Bowl_Match = 44;
    Bowl_Innings = 8;
    Ball = 67;
    conceded_Runs =70;
    Wickets = 6;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch= 25;
    Stumping = 0;
    Average =24.89 ;
    Strike_Rate = 120.81;
    Economy = 6.26;
    Bowl_Average =11.66;
    Bowl_Strike_Rate = 11.1;
    if (t20_sabbir == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Sabbir Rahman\n\n");

        fprintf(t20_sabbir,"\t\t\t\t\t\t    Sabbir Rahman\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: November 22, 1991\n\tAge: 29\n\tBirth Place: Rajshahi\n\tRole: Middle–order batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Legbreak\n\n",t20_sabbir);

        fprintf(t20_sabbir,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_sabbir,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/11\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_sabbir,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_sabbir);
        t20_sabbir = fopen("t20_sabbir.txt","r");
        while(1)
        {
            c = fgetc(t20_sabbir);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }

        fscanf(t20_sabbir,"%s",&c);
        fclose(t20_sabbir);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_sabbir;
            t20_sabbir = fopen("t20_sabbir.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_sabbir == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Sabbir Rahman\n\n");

                fprintf(t20_sabbir,"\t\t\t\t\t\t    Sabbir Rahman\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: November 22, 1991\n\tAge: 29\n\tBirth Place: Rajshahi\n\tRole: Middle–order batsman\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Legbreak\n\n",t20_sabbir);

                fprintf(t20_sabbir,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_sabbir,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_sabbir,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_sabbir);
                t20_sabbir = fopen("t20_sabbir.txt","r");
                while(1)
                {
                    c = fgetc(t20_sabbir);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_sabbir,"%s",&c);
                fclose(t20_sabbir);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_shakib()
{
    char c;
    FILE *t20_shakib;
    t20_shakib = fopen("t20_shakib.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 76;
    Innings = 76;
    Not_Out = 10;
    Runs = 1567;
    Ball_faced = 1266;
    Highest_Score =84;
    hundred = 0;
    fifty = 9;
    Bowl_Match = 76;
    Bowl_Innings =75;
    Ball = 1667;
    conceded_Runs =1894;
    Wickets = 92;
    Best_Wickets = 3;
    five_Wickets = 1;
    ten_Wickets = 0;
    Catch= 25;
    Stumping = 0;
    Average =23.74 ;
    Strike_Rate = 123.77;
    Economy = 6.81;
    Bowl_Average =20.58;
    Bowl_Strike_Rate = 18.1;
    if (t20_shakib == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Shakib Al Hasan\n\n");

        fprintf(t20_shakib,"\t\t\t\t\t\t    Shakib Al Hasan\n\t\t\t\t\t\t    ----------------\n\nPersonal Information:\n\n\tBorn: March 24, 1987\n\tAge: 34\n\tBirth Place: Magura\n\tRole: Allrounder\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Left-arm orthodox\n\n",t20_shakib);

        fprintf(t20_shakib,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_shakib,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 5/20\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_shakib,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_shakib);
        t20_shakib = fopen("t20_shakib.txt","r");
        while(1)
        {
            c = fgetc(t20_shakib);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }
        fscanf(t20_shakib,"%s",&c);
        fclose(t20_shakib);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_shakib;
            t20_shakib = fopen("t20_shakib.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_shakib == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Shakib Al Hasan\n\n");

                fprintf(t20_shakib,"\t\t\t\t\t\t    Shakib Al Hasan\n\t\t\t\t\t\t    ----------------\n\nPersonal Information:\n\n\tBorn: March 24, 1987\n\tAge: 34\n\tBirth Place: Magura\n\tRole: Allrounder\n\tBatting Style: Left-Handed Bat\n\tBowling Style: Left-arm orthodox\n\n",t20_shakib);

                fprintf(t20_shakib,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_shakib,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_shakib,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_shakib);
                t20_shakib = fopen("t20_shakib.txt","r");
                while(1)
                {
                    c = fgetc(t20_shakib);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_shakib,"%s",&c);
                fclose(t20_shakib);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_riad()
{
    char c;
    FILE *t20_riad;
    t20_riad = fopen("t20_riad.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 89;
    Innings = 81;
    Not_Out = 18;
    Runs = 1507;
    Ball_faced = 1223;
    Highest_Score =64;
    hundred = 0;
    fifty = 4;
    Bowl_Match = 89;
    Bowl_Innings =55;
    Ball = 711;
    conceded_Runs =864;
    Wickets = 31;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch= 32;
    Stumping = 0;
    Average =23.92 ;
    Strike_Rate = 123.32;
    Economy = 7.29;
    Bowl_Average =27.87;
    Bowl_Strike_Rate = 22.9;
    if (t20_riad == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Mahmudullah\n\n");

        fprintf(t20_riad,"\t\t\t\t\t\t    Mohammad Mahmudullah\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: February 4, 1986\n\tAge: 35\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",t20_riad);

        fprintf(t20_riad,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_riad,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/18\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_riad,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_riad);
        t20_riad = fopen("t20_riad.txt","r");
        while(1)
        {
            c = fgetc(t20_riad);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }
        fscanf(t20_riad,"%s",&c);
        fclose(t20_riad);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_riad;
            t20_riad = fopen("t20_riad.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;
            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_riad == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Mahmudullah\n\n");

                fprintf(t20_riad,"\t\t\t\t\t\t    Mohammad Mahmudullah\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: February 4, 1986\n\tAge: 35\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",t20_riad);

                fprintf(t20_riad,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_riad,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_riad,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_riad);
                t20_riad = fopen("t20_riad.txt","r");
                while(1)
                {
                    c = fgetc(t20_riad);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_riad,"%s",&c);
                fclose(t20_riad);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_miraj()
{
    char c;
    FILE *t20_miraj;
    t20_miraj = fopen("t20_miraj.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 13;
    Innings = 11;
    Not_Out = 2;
    Runs = 94;
    Ball_faced = 80;
    Highest_Score =19;
    hundred = 0;
    fifty = 0;
    Bowl_Match = 13;
    Bowl_Innings =13;
    Ball = 216;
    conceded_Runs =330;
    Wickets = 4;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch= 32;
    Stumping = 0;
    Average =10.44 ;
    Strike_Rate = 117.50;
    Economy = 9.16;
    Bowl_Average =82.50;
    Bowl_Strike_Rate = 54.0;
    if (t20_miraj == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mehidy Hasan Miraz\n\n");

        fprintf(t20_miraj,"\t\t\t\t\t\t    Mehidy Hasan Miraz\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: October 25, 1997\n\tAge: 23\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",t20_miraj);

        fprintf(t20_miraj,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_miraj,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/31\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_miraj,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_miraj);
        t20_miraj = fopen("t20_miraj.txt","r");
        while(1)
        {
            c = fgetc(t20_miraj);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_miraj,"%s",&c);
        fclose(t20_miraj);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_miraj;
            t20_miraj = fopen("t20_miraj.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_miraj == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mehidy Hasan Miraz\n\n");

                fprintf(t20_miraj,"\t\t\t\t\t\t    Mehidy Hasan Miraz\n\t\t\t\t\t\t    --------------------\n\nPersonal Information:\n\n\tBorn: October 25, 1997\n\tAge: 23\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right-Handed Bat\n\tBowling Style: Right-arm offbreak\n\n",t20_miraj);

                fprintf(t20_miraj,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_miraj,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_miraj,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_miraj);
                t20_miraj = fopen("t20_miraj.txt","r");
                while(1)
                {
                    c = fgetc(t20_miraj);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);

                }

                fscanf(t20_miraj,"%s",&c);
                fclose(t20_miraj);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_saifuddin()
{
    char c;
    FILE *t20_saifuddin;
    t20_saifuddin = fopen("t20_saifuddin.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 17;
    Innings = 11;
    Not_Out = 4;
    Runs = 145;
    Ball_faced = 135;
    Highest_Score = 39;
    hundred = 0;
    fifty =0;
    Bowl_Match = 17;
    Bowl_Innings = 17;
    Ball = 342;
    conceded_Runs = 513;
    Wickets = 15;
    Best_Wickets = 4;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 3;
    Stumping = 0;
    Average = 20.71;
    Strike_Rate = 107.40;
    Economy = 9.00;
    Bowl_Average = 34.20;
    Bowl_Strike_Rate =22.8;
    if (t20_saifuddin == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mohammad Saifuddin\n\n");

        fprintf(t20_saifuddin,"\t\t\t\t\t\t    Mohammad Saifuddin\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: November 1, 1996\n\tAge: 24\n\tBirth Place: Feni\n\tRole: Allrounder\n\tBatting Style: Left-handed bat\n\tBowling Style: Right-arm medium-fast\n\n",t20_saifuddin);

        fprintf(t20_saifuddin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_saifuddin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 4/33\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_saifuddin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_saifuddin);
        t20_saifuddin = fopen("t20_saifuddin.txt","r");
        while(1)
        {
            c = fgetc(t20_saifuddin);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_saifuddin,"%s",&c);
        fclose(t20_saifuddin);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_saifuddin;
            t20_saifuddin = fopen("t20_saifuddin.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_saifuddin == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mohammad Saifuddin\n\n");

                fprintf(t20_saifuddin,"\t\t\t\t\t\t    Mohammad Saifuddin\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: November 1, 1996\n\tAge: 24\n\tBirth Place: Feni\n\tRole: Allrounder\n\tBatting Style: Left-handed bat\n\tBowling Style: Right-arm medium-fast\n\n",t20_saifuddin);

                fprintf(t20_saifuddin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_saifuddin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_saifuddin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_saifuddin);
                t20_saifuddin = fopen("t20_saifuddin.txt","r");
                while(1)
                {
                    c = fgetc(t20_saifuddin);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_saifuddin,"%s",&c);
                fclose(t20_saifuddin);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_biplob()
{
    char c;
    FILE *t20_biplob;
    t20_biplob = fopen("t20_biplob.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 7;
    Innings = 4;
    Not_Out = 3;
    Runs = 22;
    Ball_faced = 18;
    Highest_Score = 9;
    hundred = 0;
    fifty =0;
    Bowl_Match = 7;
    Bowl_Innings = 7;
    Ball = 138;
    conceded_Runs = 176;
    Wickets = 10;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 1;
    Stumping = 0;
    Average = 22.00;
    Strike_Rate = 122.22;
    Economy = 7.65;
    Bowl_Average = 17.60;
    Bowl_Strike_Rate =13.8;
    if (t20_biplob == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Aminul Islam Biplob\n\n");

        fprintf(t20_biplob,"\t\t\t\t\t\t    Aminul Islam Biplob\n\t\t\t\t\t\t    -----------------------\n\nPersonal Information:\n\n\tBorn: November 6, 1999\n\tAge: 21\n\tBirth Place: Shariatpur\n\tRole: Allrounder\n\tBatting Style: Right handed bat\n\tBowling Style: Legbreak\n\n",t20_biplob);

        fprintf(t20_biplob,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_biplob,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/34\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_biplob,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_biplob);
        t20_biplob = fopen("t20_biplob.txt","r");
        while(1)
        {
            c = fgetc(t20_biplob);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }

        fscanf(t20_biplob,"%s",&c);
        fclose(t20_biplob);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_biplob;
            t20_biplob = fopen("t20_biplob.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }
            if (t20_biplob == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Aminul Islam Biplob\n\n");

                fprintf(t20_biplob,"\t\t\t\t\t\t    Aminul Islam Biplob\n\t\t\t\t\t\t   ----------------------\n\nPersonal Information:\n\n\tBorn: November 6, 1999\n\tAge: 21n\tBirth Place: Shariatpur\n\tRole: Allrounder\n\tBatting Style: Right handed bat\n\tBowling Style: Legbreak\n\n",t20_biplob);

                fprintf(t20_biplob,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_biplob,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_biplob,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_biplob);
                t20_biplob = fopen("t20_biplob.txt","r");
                while(1)
                {
                    c = fgetc(t20_biplob);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_biplob,"%s",&c);
                fclose(t20_biplob);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_ariful()
{
    char c;
    FILE *t20_ariful;
    t20_ariful = fopen("t20_ariful.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 9;
    Innings = 8;
    Not_Out = 4;
    Runs = 59;
    Ball_faced = 61;
    Highest_Score = 18;
    hundred = 0;
    fifty =0;
    Bowl_Match = 9;
    Bowl_Innings = 1;
    Ball = 6;
    conceded_Runs = 13;
    Wickets = 1;
    Best_Wickets = 1;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 5;
    Stumping = 0;
    Average = 14.75;
    Strike_Rate = 96.72;
    Economy = 13.00;
    Bowl_Average = 13.00;
    Bowl_Strike_Rate =60.0;
    if (t20_ariful == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Ariful Haque \n\n");

        fprintf(t20_ariful,"\t\t\t\t\t\t    Ariful Haque \n\t\t\t\t\t\t    ------------\n\nPersonal Information:\n\n\tBorn: November 18, 1992\n\tAge: 28\n\tBirth Place: Rangpur\n\tRole: Allrounder\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm medium-fast\n\n",t20_ariful);

        fprintf(t20_ariful,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_ariful,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 1/13\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_ariful,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_ariful);
        t20_ariful = fopen("t20_ariful.txt","r");
        while(1)
        {
            c = fgetc(t20_ariful);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_ariful,"%s",&c);
        fclose(t20_ariful);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_ariful;
            t20_ariful = fopen("t20_ariful.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_ariful == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Ariful Haque \n\n");

                fprintf(t20_ariful,"\t\t\t\t\t\t    Ariful Haque \n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: November 18, 1992\n\tAge: 28\n\tBirth Place: Rangpur\n\tRole: Allrounder\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm medium-fast\n\n",t20_ariful);

                fprintf(t20_ariful,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_ariful,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_ariful,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_ariful);
                t20_ariful = fopen("t20_ariful.txt","r");
                while(1)
                {
                    c = fgetc(t20_ariful);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_ariful,"%s",&c);
                fclose(t20_ariful);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_mustafiz()
{
    char c;
    FILE *t20_mustafiz;
    t20_mustafiz = fopen("t20_mustafiz.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 42;
    Innings = 15;
    Not_Out = 5;
    Runs = 43;
    Ball_faced = 55;
    Highest_Score = 15;
    hundred = 0;
    fifty =0;
    Bowl_Match = 42;
    Bowl_Innings = 42;
    Ball = 925;
    conceded_Runs = 1239;
    Wickets = 58;
    Best_Wickets = 5;
    five_Wickets = 1;
    ten_Wickets = 0;
    Catch = 10;
    Stumping = 0;
    Average = 4.30;
    Strike_Rate = 78.16;
    Economy = 8.03;
    Bowl_Average = 21.36;
    Bowl_Strike_Rate =15.60;
    if (t20_mustafiz == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mustafizur Rahman\n\n");

        fprintf(t20_mustafiz,"\t\t\t\t\t\t    Mustafizur Rahman\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: September 6, 1995\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Left-arm fast-medium\n\n",t20_mustafiz);

        fprintf(t20_mustafiz,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_mustafiz,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 5/22\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_mustafiz,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_mustafiz);
        t20_mustafiz = fopen("t20_mustafiz.txt","r");
        while(1)
        {
            c = fgetc(t20_mustafiz);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_mustafiz,"%s",&c);
        fclose(t20_mustafiz);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_mustafiz;
            t20_mustafiz = fopen("t20_mustafiz.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_mustafiz == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mustafizur Rahman\n\n");

                fprintf(t20_mustafiz,"\t\t\t\t\t\t    Mustafizur Rahman\n\t\t\t\t\t\t    ------------------\n\nPersonal Information:\n\n\tBorn: September 6, 1995\n\tAge: 25\n\tBirth Place: Satkhira\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Left-arm fast-medium\n\n",t20_mustafiz);

                fprintf(t20_mustafiz,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_mustafiz,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_mustafiz,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_mustafiz);
                t20_mustafiz = fopen("t20_mustafiz.txt","r");
                while(1)
                {
                    c = fgetc(t20_mustafiz);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_mustafiz,"%s",&c);
                fclose(t20_mustafiz);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_rubel()
{
    char c;
    FILE *t20_rubel;
    t20_rubel = fopen("t20_rubel.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 28;
    Innings = 15;
    Not_Out = 10;
    Runs = 20;
    Ball_faced = 36;
    Highest_Score = 8;
    hundred = 0;
    fifty =0;
    Bowl_Match = 28;
    Bowl_Innings = 27;
    Ball = 579;
    conceded_Runs = 912;
    Wickets = 28;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 1;
    Stumping = 0;
    Average = 4.0;
    Strike_Rate = 55.55;
    Economy = 9.45;
    Bowl_Average = 32.57;
    Bowl_Strike_Rate =20.6;
    if (t20_rubel == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Rubel Hossain\n\n");

        fprintf(t20_rubel,"\t\t\t\t\t\t    Rubel Hossain\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Bagerhat\n\tRole: Bowler\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm fast\n\n",t20_rubel);

        fprintf(t20_rubel,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_rubel,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/31\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_rubel,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_rubel);
        t20_rubel = fopen("t20_rubel.txt","r");
        while(1)
        {
            c = fgetc(t20_rubel);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_rubel,"%s",&c);
        fclose(t20_rubel);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_rubel;
            t20_rubel = fopen("t20_rubel.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_rubel == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Rubel Hossain\n\n");

                fprintf(t20_rubel,"\t\t\t\t\t\t    Rubel Hossain\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Bagerhat\n\tRole: Bowler\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm fast\n\n",t20_rubel);

                fprintf(t20_rubel,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_rubel,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_rubel,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_rubel);
                t20_rubel = fopen("t20_rubel.txt","r");
                while(1)
                {
                    c = fgetc(t20_rubel);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_rubel,"%s",&c);
                fclose(t20_rubel);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_shafiul()
{
    char c;
    FILE *t20_shafiul;
    t20_shafiul = fopen("t20_shafiul.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 20;
    Innings = 61;
    Not_Out = 1;
    Runs = 23;
    Ball_faced = 34;
    Highest_Score = 16;
    hundred = 0;
    fifty =0;
    Bowl_Match = 20;
    Bowl_Innings = 20;
    Ball = 400;
    conceded_Runs = 532;
    Wickets = 20;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 8;
    Stumping = 0;
    Average = 4.60;
    Strike_Rate = 69.69;
    Economy = 7.98;
    Bowl_Average = 26.60;
    Bowl_Strike_Rate = 26.4;
    if (t20_shafiul == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Shafiul Islam\n\n");

        fprintf(t20_shafiul,"\t\t\t\t\t\t    Shafiul Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: October 6, 1989\n\tAge: 31\n\tBirth Place: Bogra\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",t20_shafiul);

        fprintf(t20_shafiul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_shafiul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 3/36\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_shafiul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_shafiul);
        t20_shafiul = fopen("t20_shafiul.txt","r");
        while(1)
        {
            c = fgetc(t20_shafiul);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_shafiul,"%s",&c);
        fclose(t20_shafiul);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_shafiul;
            t20_shafiul = fopen("t20_shafiul.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_shafiul == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Shafiul Islam\n\n");

                fprintf(t20_shafiul,"\t\t\t\t\t\t    Shafiul Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: October 6, 1989\n\tAge: 31\n\tBirth Place: Bogra\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",t20_shafiul);

                fprintf(t20_shafiul,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_shafiul,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_shafiul,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_shafiul);
                t20_shafiul = fopen("t20_shafiul.txt","r");
                while(1)
                {
                    c = fgetc(t20_shafiul);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }
                fscanf(t20_shafiul,"%s",&c);
                fclose(t20_shafiul);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_al_amin()
{
    char c;
    FILE *t20_al_amin;
    t20_al_amin = fopen("t20_al_amin.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 31;
    Innings = 6;
    Not_Out = 4;
    Runs = 7;
    Ball_faced = 12;
    Highest_Score = 5;
    hundred = 0;
    fifty =0;
    Bowl_Match = 31;
    Bowl_Innings = 29;
    Ball = 614;
    conceded_Runs = 730;
    Wickets = 43;
    Best_Wickets = 3;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 4;
    Stumping = 0;
    Average = 3.50;
    Strike_Rate = 58.33;
    Economy = 7.13;
    Bowl_Average = 16.97;
    Bowl_Strike_Rate =14.2;
    if (t20_al_amin == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Al-Amin Hossain\n\n");

        fprintf(t20_al_amin,"\t\t\t\t\t\t    Al-Amin Hossain\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Jhnidah\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",t20_al_amin);

        fprintf(t20_al_amin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_al_amin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 4/51\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_al_amin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_al_amin);
        t20_al_amin = fopen("t20_al_amin.txt","r");
        while(1)
        {
            c = fgetc(t20_al_amin);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_al_amin,"%s",&c);
        fclose(t20_al_amin);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_al_amin;
            t20_al_amin = fopen("t20_al_amin.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_al_amin == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Al-Amin Hossain\n\n");

                fprintf(t20_al_amin,"\t\t\t\t\t\t    Al-Amin Hossain\n\t\t\t\t\t\t    ---------------\n\nPersonal Information:\n\n\tBorn: January 1, 1990\n\tAge: 31\n\tBirth Place: Jhnidah\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",t20_al_amin);

                fprintf(t20_al_amin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_al_amin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_al_amin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_al_amin);
                t20_al_amin = fopen("t20_al_amin.txt","r");
                while(1)
                {
                    c = fgetc(t20_al_amin);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_al_amin,"%s",&c);
                fclose(t20_al_amin);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_taskin()
{
    char c;
    FILE * t20_taskin;
    t20_taskin = fopen(" t20_taskin.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 21;
    Innings = 8;
    Not_Out = 4;
    Runs = 34;
    Ball_faced = 35;
    Highest_Score = 15;
    hundred = 0;
    fifty =0;
    Bowl_Match = 21;
    Bowl_Innings = 19;
    Ball = 370;
    conceded_Runs = 511;
    Wickets = 14;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 2;
    Stumping = 0;
    Average = 8.50;
    Strike_Rate = 97.14;
    Economy = 8.28;
    Bowl_Average = 36.50;
    Bowl_Strike_Rate= 26.40;
    if ( t20_taskin == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Taskin Ahmed\n\n");

        fprintf( t20_taskin,"\t\t\t\t\t\t    Taskin Ahmed\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: April 3, 1995\n\tAge: 25\n\tBirth Place: Dhaka\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Right-arm fast\n\n", t20_taskin);

        fprintf( t20_taskin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf( t20_taskin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/32\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf( t20_taskin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose( t20_taskin);
        t20_taskin = fopen(" t20_taskin.txt","r");
        while(1)
        {
            c = fgetc( t20_taskin);
            if(c==EOF)
            {
                break;
            }
            putchar(c);

        }
        fscanf( t20_taskin,"%s",&c);
        fclose( t20_taskin);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);
    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE * t20_taskin;
            t20_taskin = fopen(" t20_taskin.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if ( t20_taskin == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Taskin Ahmed\n\n");

                fprintf( t20_taskin,"\t\t\t\t\t\t    Taskin Ahmed\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: April 3, 1995\n\tAge: 25\n\tBirth Place: Dhaka\n\tRole: Bowler\n\tBatting Style:Left-Handed Bat\n\tBowling Style: Right-arm fast\n\n", t20_taskin);

                fprintf( t20_taskin,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf( t20_taskin,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf( t20_taskin,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose( t20_taskin);
                t20_taskin = fopen(" t20_taskin.txt","r");
                while(1)
                {
                    c = fgetc( t20_taskin);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf( t20_taskin,"%s",&c);
                fclose( t20_taskin);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_nasum()
{
    char c;
    FILE *t20_nasum;
    t20_nasum = fopen("t20_nasum.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 3;
    Innings = 2;
    Not_Out = 1;
    Runs = 3;
    Ball_faced = 5;
    Highest_Score = 3;
    hundred = 0;
    fifty =0;
    Bowl_Match = 3;
    Bowl_Innings = 3;
    Ball = 60;
    conceded_Runs = 84;
    Wickets = 2;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average =3.00;
    Strike_Rate = 60.00;
    Economy = 8.40;
    Bowl_Average = 42.00;
    Bowl_Strike_Rate =30.0;
    if (t20_nasum == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Nasum Ahmed \n\n");

        fprintf(t20_nasum,"\t\t\t\t\t\t    Nasum Ahmed \n\t\t\t\t\t\t    ------------\n\nPersonal Information:\n\n\tBorn: December 5, 1994\n\tAge: 26\n\tBirth Place: Sylhet\n\tRole: Bowler\n\tBatting Style: Left handed bat\n\tBowling Style: Slow left-arm orthodox\n\n",t20_nasum);

        fprintf(t20_nasum,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_nasum,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/30\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_nasum,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_nasum);
        t20_nasum = fopen("t20_nasum.txt","r");
        while(1)
        {
            c = fgetc(t20_nasum);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_nasum,"%s",&c);
        fclose(t20_nasum);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_nasum;
            t20_nasum = fopen("t20_nasum.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_nasum == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Nasum Ahmed \n\n");

                fprintf(t20_nasum,"\t\t\t\t\t\t    Nasum Ahmed \n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: December 5, 1994\n\tAge: 26\n\tBirth Place: Sylhet\n\tRole: Bowler\n\tBatting Style: Left handed bat\n\tBowling Style: Slow left-arm orthodox\n\n",t20_nasum);

                fprintf(t20_nasum,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_nasum,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_nasum,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_nasum);
                t20_nasum = fopen("t20_nasum.txt","r");
                while(1)
                {
                    c = fgetc(t20_nasum);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_nasum,"%s",&c);
                fclose(t20_nasum);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_h_mahmud()
{
    char c;
    FILE *t20_h_mahmud;
    t20_h_mahmud = fopen("t20_h_mahmud.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 1;
    Innings = 0;
    Not_Out = 0;
    Runs = 0;
    Ball_faced = 0;
    Highest_Score = 0;
    hundred = 0;
    fifty =0;
    Bowl_Match = 1;
    Bowl_Innings = 1;
    Ball = 24;
    conceded_Runs = 25;
    Wickets = 0;
    Best_Wickets = 0;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 0;
    Strike_Rate = 0;
    Economy = 6.25;
    Bowl_Average =0;
    Bowl_Strike_Rate =0;
    if (t20_h_mahmud == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Hasan Mahmud\n\n");

        fprintf(t20_h_mahmud,"\t\t\t\t\t\t    Hasan Mahmud\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: October 12, 1999\n\tAge: 21\n\tBirth Place: Laxmipur\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",t20_h_mahmud);

        fprintf(t20_h_mahmud,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_h_mahmud,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 0/25\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_h_mahmud,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_h_mahmud);
        t20_h_mahmud = fopen("t20_h_mahmud.txt","r");
        while(1)
        {
            c = fgetc(t20_h_mahmud);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_h_mahmud,"%s",&c);
        fclose(t20_h_mahmud);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_h_mahmud;
            t20_h_mahmud = fopen("t20_h_mahmud.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_h_mahmud == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Hasan Mahmud\n\n");

                fprintf(t20_h_mahmud,"\t\t\t\t\t\t    Hasan Mahmud\n\t\t\t\t\t\t    -------------\n\nPersonal Information:\n\n\tBorn: October 12, 1999\n\tAge: 21\n\tBirth Place: Laxmipur\n\tRole: Bowler\n\tBatting Style:Right-Handed Bat\n\tBowling Style: Right-arm fast-medium\n\n",t20_h_mahmud);

                fprintf(t20_h_mahmud,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_h_mahmud,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_h_mahmud,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_h_mahmud);
                t20_h_mahmud = fopen("t20_h_mahmud.txt","r");
                while(1)
                {
                    c = fgetc(t20_h_mahmud);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_h_mahmud,"%s",&c);
                fclose(t20_h_mahmud);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void  t20_shoriful()
{
    char c;
    FILE * t20_shoriful;
    t20_shoriful = fopen(" t20_shoriful.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 3;
    Innings = 2;
    Not_Out = 0;
    Runs = 11;
    Ball_faced = 10;
    Highest_Score = 6;
    hundred = 0;
    fifty =0;
    Bowl_Match = 3;
    Bowl_Innings = 3;
    Ball = 54;
    conceded_Runs = 87;
    Wickets = 2;
    Best_Wickets = 1;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 0;
    Stumping = 0;
    Average = 5.50;
    Strike_Rate = 110.00;
    Economy = 9.66;
    Bowl_Average = 43.50;
    Bowl_Strike_Rate =27.0;
    if ( t20_shoriful == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Shoriful Islam\n\n");

        fprintf( t20_shoriful,"\t\t\t\t\t\t    Shoriful Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: June 3, 2001\n\tAge: 19\n\tBirth Place: Panchagor\n\tRole: Bowler\n\tBatting Style: Left handed bat\n\tBowling Style: Left-arm medium-fast\n\n", t20_shoriful);

        fprintf( t20_shoriful,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf( t20_shoriful,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 1/16\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf( t20_shoriful,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose( t20_shoriful);
        t20_shoriful = fopen(" t20_shoriful.txt","r");
        while(1)
        {
            c = fgetc( t20_shoriful);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf( t20_shoriful,"%s",&c);
        fclose( t20_shoriful);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE * t20_shoriful;
            t20_shoriful = fopen(" t20_shoriful.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if ( t20_shoriful == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Shoriful Islam\n\n");

                fprintf( t20_shoriful,"\t\t\t\t\t\t    Shoriful Islam\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: June 3, 2001\n\tAge: 19\n\tBirth Place: Panchagor\n\tRole: Bowler\n\tBatting Style: Left handed bat\n\tBowling Style: Left-arm medium-fast\n\n", t20_shoriful);

                fprintf( t20_shoriful,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf( t20_shoriful,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf( t20_shoriful,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose( t20_shoriful);
                t20_shoriful = fopen(" t20_shoriful.txt","r");
                while(1)
                {
                    c = fgetc( t20_shoriful);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf( t20_shoriful,"%s",&c);
                fclose( t20_shoriful);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_saikot()
{
    char c;
    FILE *t20_saikot;
    t20_saikot = fopen("t20_saikot.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 15;
    Innings = 14;
    Not_Out = 4;
    Runs = 196;
    Ball_faced = 181 ;
    Highest_Score =34;
    hundred = 0;
    fifty = 0;
    Bowl_Match = 15;
    Bowl_Innings = 12;
    Ball = 130;
    conceded_Runs = 160;
    Wickets = 5;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 7;
    Stumping = 0;
    Average = 19.60;
    Strike_Rate = 108.28;
    Economy = 7.28;
    Bowl_Average = 32.00;
    Bowl_Strike_Rate = 32.00;
    if (t20_saikot == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mosaddek Hossain Saikat\n\n");

        fprintf(t20_saikot,"\t\t\t\t\t\t     Mosaddek Hossain Saikat\n\t\t\t\t\t\t    -------------------------\n\nPersonal Information:\n\n\tBorn: December 10, 1995\n\tAge: 25\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_saikot);

        fprintf(t20_saikot,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_saikot,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/21\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_saikot,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_saikot);
        t20_saikot = fopen("t20_saikot.txt","r");
        while(1)
        {
            c = fgetc(t20_saikot);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_saikot,"%s",&c);
        fclose(t20_saikot);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }
        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);

        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_saikot;
            t20_saikot = fopen("t20_saikot.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_saikot == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mosaddek Hossain Saikat\n\n");

                fprintf(t20_saikot,"\t\t\t\t\t\t     Mosaddek Hossain Saikat\n\t\t\t\t\t\t    -------------------------\n\nPersonal Information:\n\n\tBorn: December 10, 1995\n\tAge: 25\n\tBirth Place: Mymensingh\n\tRole: Allrounder\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_saikot);

                fprintf(t20_saikot,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_saikot,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_saikot,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_saikot);
                t20_saikot = fopen("t20_saikot.txt","r");
                while(1)
                {
                    c = fgetc(t20_saikot);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_saikot,"%s",&c);
                fclose(t20_saikot);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_afif()
{
    char c;
    FILE *t20_afif;
    t20_afif = fopen("t20_afif.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 15;
    Innings = 12;
    Not_Out = 0;
    Runs = 168;
    Ball_faced = 136 ;
    Highest_Score =52;
    hundred = 0;
    fifty = 0;
    Bowl_Match = 15;
    Bowl_Innings = 9;
    Ball = 90;
    conceded_Runs = 121;
    Wickets = 6;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 5;
    Stumping = 0;
    Average = 14.00;
    Strike_Rate = 123.52;
    Economy = 8.06;
    Bowl_Average = 20.16;
    Bowl_Strike_Rate = 15.0;
    if (t20_afif == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Afif Hossain Dhrubo\n\n");

        fprintf(t20_afif,"\t\t\t\t\t\t     Afif Hossain Dhrubo\n\t\t\t\t\t\t    ---------------------\n\nPersonal Information:\n\n\tBorn: September 22, 1999\n\tAge: 21\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Left handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_afif);

        fprintf(t20_afif,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_afif,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/9\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_afif,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_afif);
        t20_afif = fopen("t20_afif.txt","r");
        while(1)
        {
            c = fgetc(t20_afif);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_afif,"%s",&c);
        fclose(t20_afif);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }
        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_afif;
            t20_afif = fopen("t20_afif.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);

            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_afif == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Afif Hossain Dhrubo\n\n");

                fprintf(t20_afif,"\t\t\t\t\t\t     Afif Hossain Dhrubo\n\t\t\t\t\t\t    ---------------------\n\nPersonal Information:\n\n\tBorn: September 22, 1999\n\tAge: 21\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Left handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_afif);

                fprintf(t20_afif,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_afif,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_afif,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_afif);
                t20_afif = fopen("t20_afif.txt","r");
                while(1)
                {
                    c = fgetc(t20_afif);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_afif,"%s",&c);
                fclose(t20_afif);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}

void t20_mahedi()
{
    char c;
    FILE *t20_mahedi;
    t20_mahedi = fopen("t20_mahedi.txt","w");
    int Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score, hundred, fifty, Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Best_Wickets,Best_Wickets_conceded_Runs,Best, five_Wickets,ten_Wickets, Catch,Stumping ;
    int e,d;
    double Average,Strike_Rate, Economy,Bowl_Average,Bowl_Strike_Rate ;
    Match = 7;
    Innings = 5;
    Not_Out = 1;
    Runs = 32;
    Ball_faced = 32 ;
    Highest_Score =12;
    hundred = 0;
    fifty = 0;
    Bowl_Match = 7;
    Bowl_Innings = 7;
    Ball = 138;
    conceded_Runs = 212;
    Wickets = 5;
    Best_Wickets = 2;
    five_Wickets = 0;
    ten_Wickets = 0;
    Catch = 2;
    Stumping = 0;
    Average = 8.00;
    Strike_Rate = 100.00;
    Economy = 9.21;
    Bowl_Average = 42.40;
    Bowl_Strike_Rate = 27.6;
    if (t20_mahedi == NULL)
        printf("NO file");
    else
    {
        printf("\n\n\t\t\t\t\t       Profile of Mahedi Hasan\n\n");

        fprintf(t20_mahedi,"\t\t\t\t\t\t     Mahedi Hasan\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: December 12, 1994\n\tAge: 26\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_mahedi);

        fprintf(t20_mahedi,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",Match,Innings,Not_Out, Runs, Ball_faced, Highest_Score,Average,Strike_Rate, hundred, fifty);

        fprintf(t20_mahedi,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: 2/45\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",Bowl_Match, Bowl_Innings,Ball,conceded_Runs,Wickets,Economy,Bowl_Average,Bowl_Strike_Rate,five_Wickets,ten_Wickets);

        fprintf(t20_mahedi,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",Catch,Stumping);

        fclose(t20_mahedi);
        t20_mahedi = fopen("t20_mahedi.txt","r");
        while(1)
        {
            c = fgetc(t20_mahedi);
            if(c==EOF)
            {
                break;
            }
            putchar(c);
        }

        fscanf(t20_mahedi,"%s",&c);
        fclose(t20_mahedi);
    }
    int n;
    printf("\n\n1.Edit\n2.Back to Main Menu\n3.Exit\n");
    printf("\n\t\t\t\t\tEnter your choice: ");
    scanf("%d",&n);

    if(n==1)
    {
        int initial,  total_runs=0, total_ball_faced=0,k ;
        int N_Match,N_Innings,N_Not_Out, N_Runs, N_Ball_faced, N_Highest_Score, N_hundred, N_fifty, N_Bowl_Match, N_Bowl_Innings,N_Ball,N_conceded_Runs,N_Wickets,N_Best_Wickets,N_Best_Wickets_conceded_Runs,N_Best, N_five_Wickets,N_ten_Wickets, N_Catch,N_Stumping ;

        double N_Average,N_Strike_Rate, N_Economy,N_Bowl_Average,N_Bowl_Strike_Rate ;
        printf("\nIn order to update this player's profile give all the necessary information required below.All these information should be accurate and about this player's international matches played after 1st April.");
        printf("\n\nBatting:\n\n\tMatch: ");
        scanf("%d",&N_Match);
        printf("\n\tInnings: ");
        scanf("%d",&N_Innings);
        printf("\n\tNot Out: ");
        scanf("%d",&N_Not_Out);
        printf("\n\tRuns: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Runs);
            total_runs = total_runs + N_Runs;
        }

        printf("\n\tBalls Faced: ");
        for(initial=1; initial <= N_Innings; initial++ )
        {
            scanf("%d",&N_Ball_faced);
            total_ball_faced = total_ball_faced + N_Ball_faced;
        }

        printf("\n\tHighest Score: ");
        scanf("%d",&N_Highest_Score);
        printf("\n\t100: ");
        scanf("%d",&N_hundred);
        printf("\n\t50: ");
        scanf("%d",&N_fifty);
        printf("\n\t\n\nBowling:\n\n\tInnings: ");
        scanf("%d",&N_Bowl_Innings);
        printf("\n\tBall: ");
        scanf("%d",&N_Ball);
        printf("\n\tConceded Runs: ");
        scanf("%d",&N_conceded_Runs);
        printf("\n\tWickets: ");
        scanf("%d",&N_Wickets);
        printf("Enter new best bowling figure: ");
        scanf("%d%d", &e,&d);
        printf("\n\t5 Wickets: ");
        scanf("%d",&N_five_Wickets);
        printf("\n\t10 Wickets: ");
        scanf("%d",&N_ten_Wickets);
        printf("\n\nFielding:\n\n\tCatch: ");
        scanf("%d",&N_Catch);
        printf("\n\tStumping: ");
        scanf("%d",&N_Stumping);
        printf("\nEnter 1 to see updated profile");
        printf("\n\n1.Updated profile\n2.Back to Main Menu\n3.Exit\n");
        printf("\t\t\t\t\tEnter your choice: ");
        scanf("%d",&k);
        if (k==1)
        {
            char c;
            FILE *t20_mahedi;
            t20_mahedi = fopen("t20_mahedi.txt","w");
            int U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score, U_hundred, U_fifty, U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,U_Best_Wickets,U_Best_Wickets_conceded_Runs,U_Best, U_five_Wickets,U_ten_Wickets, U_Catch,U_Stumping ;

            double U_Average,U_Strike_Rate, U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate ;
            U_Match = Match + N_Match;
            U_Innings = Innings + N_Innings;
            U_Not_Out = Not_Out + N_Not_Out ;
            U_Runs = Runs + total_runs ;
            U_Ball_faced = Ball_faced + total_ball_faced ;
            U_hundred = hundred + N_hundred ;
            U_fifty = fifty + N_fifty;
            U_Bowl_Match = Match + N_Match;
            U_Bowl_Innings = Bowl_Innings + N_Bowl_Innings ;
            U_Ball = Ball + N_Ball ;
            U_conceded_Runs = conceded_Runs + N_conceded_Runs;
            U_Wickets = Wickets + N_Wickets;
            U_five_Wickets = five_Wickets + N_five_Wickets;
            U_ten_Wickets = ten_Wickets + N_ten_Wickets;
            U_Catch = Catch + N_Catch;
            U_Stumping = Stumping + N_Stumping;
            U_Average = (float)(U_Runs)/(float)(U_Innings-U_Not_Out);
            U_Strike_Rate = ((float)(U_Runs)/ (float)(U_Ball_faced))*100;
            U_Economy = ((float)(U_conceded_Runs)/(float)(U_Ball))*6;
            U_Bowl_Average = (float)(U_conceded_Runs) / (float)(U_Wickets);
            U_Bowl_Strike_Rate = (float)(U_Ball) / (float)(U_Wickets);
            if(Highest_Score <= N_Highest_Score)
            {
                U_Highest_Score = N_Highest_Score;
            }
            else
            {
                U_Highest_Score = Highest_Score ;
            }

            if (t20_mahedi == NULL)
                printf("NO file");
            else
            {
                printf("\n\n\t\t\t\t\t Updated profile of Mahedi Hasan\n\n");

                fprintf(t20_mahedi,"\t\t\t\t\t\t     Mahedi Hasan\n\t\t\t\t\t\t    --------------\n\nPersonal Information:\n\n\tBorn: December 12, 1994\n\tAge: 26\n\tBirth Place: Khulna\n\tRole: Allrounder\n\tBatting Style: Right handed bat\n\tBowling Style: Right-arm offbreak\n\n",t20_mahedi);

                fprintf(t20_mahedi,"Batting:\n\n\tMatch:%d\n\tInnings: %d\n\tNot Out: %d\n\tRuns: %d\n\tBalls Faced: %d\n\tHighest Score: %d\n\tAverage: %.2lf\n\tStrike Rate: %.2lf\n\t100: %d\n\t50: %d",U_Match,U_Innings,U_Not_Out, U_Runs, U_Ball_faced, U_Highest_Score,U_Average,U_Strike_Rate, U_hundred, U_fifty);

                fprintf(t20_mahedi,"\n\nBowling:\n\n\tMatch:%d\n\tInnings: %d\n\tBalls: %d\n\tConceded Runs: %d\n\tWickets: %d\n\tBest: %d/%d\n\tEconomy: %.2lf\n\tAverage: %.1lf\n\tStrike Rate: %.2lf\n\t5 Wickets: %d\n\t10 Wickets: %d",U_Bowl_Match, U_Bowl_Innings,U_Ball,U_conceded_Runs,U_Wickets,e,d,U_Economy,U_Bowl_Average,U_Bowl_Strike_Rate,U_five_Wickets,U_ten_Wickets);

                fprintf(t20_mahedi,"\n\nFielding:\n\n\tCatch: %d\n\tStumping: %d",U_Catch,U_Stumping);

                fclose(t20_mahedi);
                t20_mahedi = fopen("t20_mahedi.txt","r");
                while(1)
                {
                    c = fgetc(t20_mahedi);
                    if(c==EOF)
                    {
                        break;
                    }
                    putchar(c);
                }

                fscanf(t20_mahedi,"%s",&c);
                fclose(t20_mahedi);
            }
            int z;
            printf("\n\n1.Back to Main Menu\n2.Exit\n");
            printf("\t\t\t\t\tEnter your choice: ");
            scanf("%d",&z);
            switch(z)
            {
            case 1:
            {
                main();
                break;
            }
            case 2:
            {
                exit(0);
            }
            }
        }
        else if(k==2)
        {
            main();
        }
        else if(k==3)
        {
            exit(0);
        }
    }
    else if(n==2)
    {
        main();
    }
    else if(n==3)
    {
        exit(0);
    }
}
