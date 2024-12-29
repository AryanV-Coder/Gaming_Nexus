#include <mysql.h>
void main ()
{
MYSQL *conn;
    char *server = "localhost";
    char *user= "root";
    char *password = "Taru@23sep";
    char *database = NULL;

    conn = mysql_init(NULL);
    conn = mysql_real_connect(conn,server,user,password,database,0,NULL,0);

    mysql_query(conn,"create database if not exists Gaming_Nexus");
    mysql_query(conn,"use Gaming_Nexus");
    mysql_query(conn,"create table if not exists Players(Name varchar(40), Username varchar(40), Password varchar(40), Balance int(5))");
    mysql_query(conn,"create table if not exists TGames(Username varchar(40), Lucky7 int(5), Scramble_Word int(5), Maze int(5), Cards_Matching int(5), Word_Guessing int(5), Rock_Paper_Scissors int(5), Number_Guessing int(5))");
    mysql_query(conn,"create table if not exists WGames(Username varchar(40), Lucky7 int(5), Scramble_Word int(5), Maze int(5), Cards_Matching int(5), Word_Guessing int(5), Rock_Paper_Scissors int(5), Number_Guessing int(5))");
    mysql_query(conn,"create table if not exists LGames(Username varchar(40), Lucky7 int(5), Scramble_Word int(5), Maze int(5), Cards_Matching int(5), Word_Guessing int(5), Rock_Paper_Scissors int(5), Number_Guessing int(5))");

    mysql_commit(conn);
    mysql_close(conn);
}
