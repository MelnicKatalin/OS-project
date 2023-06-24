#include <iostream>
#include <fstream>
#include <readline/readline.h>
#include <readline/history.h>
#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
#include <cstring>
#include <fcntl.h>
#include <sys/wait.h>

using namespace std;
string lower(string str)
{
    for(auto& c : str)
    {
        c = tolower(c);
    }
    return str;
}
void tailsingular(char* file)
{
    int n = 10;
    FILE* f;
    unsigned long long p;
    int c = 0;
    f = fopen(file, "r");
    char string[200];
    if(!f)
    {
        perror("fopen");
        return;
    }
    else
    {
        printf("file opened\n");
    }
    if(fseek(f, -1, SEEK_END))
    {
        perror("fseek");
    }
    else
    {
        p = ftell(f);
        printf("%lld\n", p);
        while(p != EOF)
        {
            rewind(f);
            p--;
            if(!fseek(f, p, SEEK_SET))
            {
                if(fgetc(f) == '\n')
                {  
                    c++;
                    if(c == n)
                    {
                        break;           
                    }
                }
            }
                
        }
            while(fgets(string, sizeof(string), f))
                {
                    printf("%s", string);
                }
    }
    printf("\n");
}
void tailmultiple(char* file)
{
    int n = 10;
    FILE* f;
    unsigned long long p;
    int c = 0;
    f = fopen(file, "r");
    char string[200];
    if(!f)
    {
        perror("fopen");
        return;
    }
    else
    {
        printf("file opened\n");
    }
    if(fseek(f, 0, SEEK_END))
    {
        perror("fseek");
    }
    else
    {
        p = ftell(f);
        printf("%lld\n", p);
        while(p != EOF)
        {
            rewind(f);
            p--;
            if(!fseek(f, p, SEEK_SET))
            {
                if(fgetc(f) == '\n')
                {  
                    c++;
                    if(c == n)
                    {
                        break;           
                    }
                }
            }
                
        }
        printf("==> %s <==\n", file);
            while(fgets(string, sizeof(string), f))
                {
                    printf("%s", string);
                }
    }
    printf("\n");
}
void ntailsingular(char* file, int n)
{
    FILE* f;
    unsigned long long p;
    int c = 0;
    f = fopen(file, "r");
    char string[200];
    if(!f)
    {
        perror("fopen");
        return;
    }
    else
    {
        printf("file opened\n");
    }
    if(fseek(f, 0, SEEK_END))
    {
        perror("fseek");
    }
    else
    {
        p = ftell(f);
        printf("%lld\n", p);
        while(p != EOF)
        {
            rewind(f);
            p--;
            if(!fseek(f, p, SEEK_SET))
            {
                if(fgetc(f) == '\n')
                {  
                    c++;
                    if(c == n)
                    {
                        break;           
                    }
                }
            }
                
        }
            while(fgets(string, sizeof(string), f))
                {
                    printf("%s", string);
                }
    }
    printf("\n");
}
void ntailmultiple(char* file, int n)
{
    FILE* f;
    unsigned long long p;
    int c = 0;
    f = fopen(file, "r");
    char string[200];
    if(!f)
    {
        perror("fopen");
        return;
    }
    else
    {
        printf("file opened\n");
    }
    if(fseek(f, 0, SEEK_END))
    {
        perror("fseek");
    }
    else
    {
        p = ftell(f);
        printf("%lld\n", p);
        while(p != EOF)
        {
            rewind(f);
            p--;
            if(!fseek(f, p, SEEK_SET))
            {
                if(fgetc(f) == '\n')
                {  
                    c++;
                    if(c == n)
                    {
                        break;           
                    }
                }
            }
                
        }
        printf("==> %s <==\n", file);
            while(fgets(string, sizeof(string), f))
                {
                    printf("%s", string);
                }
    }
    printf("\n");
}
void qtail(char* file)
{
    int n = 10;
    FILE* f;
    unsigned long long p;
    int c = 0;
    f = fopen(file, "r");
    char string[200];
    if(!f)
    {
        perror("fopen");
        return;
    }
    else
    {
        printf("file opened\n");
    }
    if(fseek(f, 0, SEEK_END))
    {
        perror("fseek");
    }
    else
    {
        p = ftell(f);
        printf("%lld\n", p);
        while(p != EOF)
        {
            rewind(f);
            p--;
            if(!fseek(f, p--, SEEK_SET))
            {
                if(fgetc(f) == '\n')
                {  
                    c++;
                    if(c == n)
                    {
                        break;           
                    }
                }
            }
                
        }
            while(fgets(string, sizeof(string), f))
                {
                    printf("%s", string);
                }
    }
    printf("\n");
}
void vtail(char* file)
{
    int n = 10;
    FILE* f;
    unsigned long long p;
    int c = 0;
    f = fopen(file, "r");
    char string[200];
    if(!f)
    {
        perror("fopen");
        return;
    }
    else
    {
        printf("file opened\n");
    }
    if(fseek(f, 0, SEEK_END))
    {
        perror("fseek");
    }
    else
    {
        p = ftell(f);
        printf("%lld\n", p);
        while(p != EOF)
        {
            rewind(f);
            p--;
            if(!fseek(f, p, SEEK_SET))
            {
                if(fgetc(f) == '\n')
                {  
                    c++;
                    if(c == n)
                    {
                        break;           
                    }
                }
            }
                
        }
            printf("==> %s <==\n", file);
            while(fgets(string, sizeof(string), f))
                {
                    printf("%s", string);
                }
    }
    printf("\n");
}
void ctailsingular(char* file, int n)
{
    unsigned long long t;
    char p;
    FILE* f = fopen(file, "r");
    if(!f)
    {
        perror("fopen");
        return;
    }
    fseek(f, 0, SEEK_END);
    t = ftell(f);
    int ok = 0;
    fseek(f, (t-n), SEEK_SET);
    rewind(f);
    while((p = fgetc(f))!=EOF)
    {
        printf("%c", p);
    }
    printf("\n");
}
void ctailmultiple(char* file, int n)
{
    unsigned long long t;
    char p;
    FILE* f = fopen(file, "r");
    if(!f)
    {
        perror("fopen");
        return;
    }
    fseek(f, 0, SEEK_END);
    t = ftell(f);
    fseek(f, (t-n), SEEK_SET);
    rewind(f);
    printf("==> %s <==\n", file);
    while((p = fgetc(f))!=EOF)
    {
        printf("%c", p);
    }
    printf("\n");
}
void uniq(char* file)
{
    ifstream input(file);
    string line;
    vector<string> lines;
    int i = 0;
    while(getline(input, line))
    {
        lines.push_back(line);
        i++;
    }
    int j = 0;
    while(j < i)
    {
        int ok = 1;
        if(lines[j] == lines[j+1])
        {
            ok = 0;
            cout << lines[j] << endl;
            while(lines[j] == lines[j+1])
            {
                j++;
            }
        }
        if(ok == 1)
        {
            cout<< lines[j]<< endl;
        }
        j++;
    }
}
void muniq(char* file, char* file2)
{
    ifstream input(file);
    ofstream output(file2);
    string line;
    vector<string> lines;
    int i = 0;
    while(getline(input, line))
    {
        lines.push_back(line);
        i++;
    }
    int j = 0;
    while(j < i)
    {
        int ok = 1;
        if(lines[j] == lines[j+1])
        {
            ok = 0;
            cout << lines[j] << endl;
            while(lines[j] == lines[j+1])
            {
                j++;
            }
        }
        if(ok == 1)
        {
            output<< lines[j]<< endl;
        }
        j++;
    }
}
void iuniq(char* file)
{
    ifstream input(file);
    string line, pline;
    bool fline = true;
    while(getline(input, line))
    {
        if(fline || lower(line)!= lower(pline))
        {
            cout<<line<<endl;
            pline = line;
            fline = false;
        }
    }
}
void uuniq(char* file)
{
    ifstream input(file);
    string line;
    vector<string> lines;
    int i = 0;
    while(getline(input, line))
    {
        lines.push_back(line);
        i++;
    }
    int j = 0;
    while(j < i)
    {
        int ok = 1;
        if((lines[j] == lines[j+1] & j < (i-1)) || (lines[j-1] == lines[j] && j > 1))
        {
            j++;
            ok = 0;
        }
        if(ok == 1)
        {
            cout << lines[j] << endl;
            j++;
        }
    }
}
void duniq(char* file)
{
    ifstream input(file);
    string line;
    vector<string> lines;
    int i = 0;
    while(getline(input, line))
    {
        lines.push_back(line);
        i++;
    }
    int j = 0;
    while(j < i)
    {
        if(lines[j] == lines[j+1] & j < (i-1))
        {
            cout << lines[j] << endl;
            j++;
            while(lines[j] == lines[j+1] & j < (i-1))
            {
                j++;
            }
        }
        j++;
    }
}
void miuniq(char* file, char* file2)
{
    ifstream input(file);
    ofstream output(file2);
    string line, pline;
    bool fline = true;
    while(getline(input, line))
    {
        if(fline || lower(line)!= lower(pline))
        {
            output<<line<<endl;
            pline = line;
            fline = false;
        }
    }
}
void muuniq(char* file, char* file2)
{
    ifstream input(file);
    ofstream output(file2);
    string line;
    vector<string> lines;
    int i = 0;
    while(getline(input, line))
    {
        lines.push_back(line);
        i++;
    }
    int j = 0;
    while(j < i)
    {
        int ok = 1;
        if((lines[j] == lines[j+1] & j < (i-1)) || (lines[j-1] == lines[j] && j > 1))
        {
            j++;
            ok = 0;
        }
        if(ok == 1)
        {
            output << lines[j] << endl;
            j++;
        }
    }
}
void mduniq(char* file, char* file2)
{
    ifstream input(file);
    ofstream output(file2);
    string line;
    vector<string> lines;
    int i = 0;
    while(getline(input, line))
    {
        lines.push_back(line);
        i++;
    }
    int j = 0;
    while(j < i)
    {
        if(lines[j] == lines[j+1] & j < (i-1))
        {
            output << lines[j] << endl;
            j++;
            while(lines[j] == lines[j+1] & j < (i-1))
            {
                j++;
            }
        }
        j++;
    }
}

int main() 
{
    char *d;
    char* input;
    while (input = readline("~$ ")) 
    {
        pid_t p;
        //char* input = readline("~$ ");
        add_history(input);
        char* commands[1024];
        int nr = 0;
        char* s = strtok(input, " ");
        
        while (s) 
        {
            commands[nr] = s;
            nr++;
            s = strtok(NULL, " ");
        }
        p = fork();
        if(p == 0)
        {
            if((strcmp(commands[0], "tail") != 0) && (strcmp(commands[0], "cd") != 0) && (strcmp(commands[0], "uniq") != 0) && (strcmp(commands[0], "exit") != 0))
            {
                execvp(commands[0], commands);
            }
            exit(0);
        }
        else
        {
            wait(NULL);
            if(strcmp(commands[0], "exit") == 0)
            {
                break;
            }
            if (strcmp(commands[0], "cd") == 0)
            {
                if (nr > 1) 
                {
                    if (chdir(commands[1]) != 0) 
                    {
                        perror("chdir failed");
                    }
                } else 
                {
                    if (chdir(getenv("HOME")) != 0) 
                    {
                        perror("chdir failed");
                    }
                }   
                cout<<getcwd(d, 100)<<endl;
            }
            if(strcmp(commands[0], "tail") == 0)
            {
                int ok = 0;
                int comm;
                if(strcmp(commands[1], "-n") == 0)
                {
                    if(nr == 4)
                    {
                        ntailsingular(commands[3], atoi(commands[2]));
                        ok = 1;
                    }
                    if(nr > 4)
                    {
                        int x = 3;
                        while(x < nr)
                        {
                            ntailmultiple(commands[x], atoi(commands[2]));
                            x++;
                        }
                        ok = 1;
                    }
                }
                if(strcmp(commands[1], "-q") == 0 && nr > 2)
                {
                    int z = 2;
                    while(z < nr)
                    {
                        qtail(commands[z]);
                        z++;
                    }
                    ok = 1;
                }
                if(strcmp(commands[1], "-v") == 0 && nr > 2)
                {
                    int o = 2;
                    while(o < nr)
                    {
                        vtail(commands[o]);
                        o++;
                    }
                    ok = 1;
                }
                if(strcmp(commands[1], "-c") == 0 && nr > 2)
                {
                    if(nr == 4)
                    {
                        ctailsingular(commands[3], atoi(commands[2]));
                        ok = 1;
                    }
                    if(nr > 4)
                    {
                        int r = 3;
                        while(r < nr)
                        {
                            ctailmultiple(commands[r], atoi(commands[2]));
                            r++;
                            ok = 1;
                        }
                    }
                }
                
                if(ok == 0 && nr == 2)
                {
                    tailsingular(commands[1]);
                }
                if(ok == 0 && nr > 2)
                {
                    int w = 1;
                    while(w < nr)
                    {
                        tailmultiple(commands[w]);
                        w++;
                    }
                }
                if(nr == 1)
                {
                    cout << "Not enough arguments" << endl;
                }
            }
            if(strcmp(commands[0], "uniq") == 0)
            {
                int ok1 = 0;
                if(strcmp(commands[1], "-i") == 0)
                {
                    if(nr < 3)
                    {
                        cout<<"Not enough arguments"<<endl;
                    }
                    if(nr > 4)
                    {
                        cout<<"uniq: extra operand " << "'" << commands[4] << "'" <<endl;
                    }
                    if(nr == 3)
                    {
                        iuniq(commands[2]);
                        ok1 = 1;
                    }
                    if(nr == 4)
                    {
                        miuniq(commands[2], commands[3]);
                        ok1 = 1;
                    }
                }
                if(strcmp(commands[1], "-u") == 0)
                {
                    if(nr < 3)
                    {
                        cout<<"Not enough arguments"<<endl;
                    }
                    if(nr > 4)
                    {
                        cout<<"uniq: extra operand " << "'" << commands[4] << "'" <<endl;
                    }
                    if(nr == 3)
                    {
                        uuniq(commands[2]);
                        ok1 = 1;
                    }
                    if(nr == 4)
                    {
                        muuniq(commands[2], commands[3]);
                        ok1 = 1;
                    }
                }
                if(strcmp(commands[1], "-d") == 0)
                {
                    if(nr < 3)
                    {
                        cout<<"Not enough arguments"<<endl;
                    }
                    if(nr > 4)
                    {
                        cout<<"uniq: extra operand " << "'" << commands[4] << "'" <<endl;
                    }
                    if(nr == 3)
                    {
                        duniq(commands[2]);
                        ok1 = 1;
                    }
                    if(nr == 4)
                    {
                        mduniq(commands[2], commands[3]);
                        ok1 = 1;
                    }
                }
                if(ok1 == 0)
                {
                    if(nr < 2)
                    {
                        cout<<"Not enough arguments"<<endl;
                    }
                    if(nr > 3)
                    {
                        cout<<"uniq: extra operand " << "'" << commands[3] << "'" <<endl;
                    }
                    if(nr == 2)
                    {
                        uniq(commands[1]);
                        ok1 = 1;
                    }
                    if(nr == 3)
                    {
                        muniq(commands[1], commands[2]);
                        ok1 = 1;
                    }
                }
            }


        }
        free(input);
        for(int i = 0 ; i < nr; i++)
        {
            commands[i] = NULL;
        }
    }

}