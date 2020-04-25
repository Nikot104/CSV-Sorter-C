#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "simpleCSVsorter.h"

//int to string
char* notNum(char* str, int val){
	sprintf(str, "%d", val);
	return str; 
}

//double to string
char* notDouble(char* str, double val){
	sprintf(str, "%.6g", val);
	return str; 
}

//prints out elements in the movie struct
void printElement (Movie elem){
	char* numeric_tmp = (char*)malloc(10);
	printf("%s,", strcmp(elem.color, "~") == 0 ? "" :elem.color );
	printf("%s,", strcmp(elem.director_name, "~") == 0? "": elem.director_name);
	printf("%s,", elem.num_critic_for_reviews == -1? "" : notNum(numeric_tmp, elem.num_critic_for_reviews));
	printf("%s,", elem.duration == -1? "" : notNum(numeric_tmp, elem.duration));
	printf("%s,", elem.director_facebook_likes == -1? "" : notNum(numeric_tmp, elem.director_facebook_likes));
	printf("%s,", elem.actor_3_facebook_likes == -1? "" : notNum(numeric_tmp, elem.actor_3_facebook_likes));
	printf("%s,", strcmp(elem.actor_2_name, "~") == 0?"":elem.actor_2_name);
	printf("%s,", elem.actor_1_facebook_likes == -1? "" : notNum(numeric_tmp, elem.actor_1_facebook_likes));
	printf("%s,", elem.gross == -1 ? "" : notNum(numeric_tmp, elem.gross));
	printf("%s,", strcmp(elem.genres, "~") == 0?"":elem.genres );
	printf("%s,", strcmp(elem.actor_1_name, "~") == 0?"":elem.actor_1_name );
	printf("%s,", strcmp(elem.movie_title, "~") == 0?"":elem.movie_title );
	printf("%s,", elem.num_voted_users == -1 ? "" : notNum(numeric_tmp, elem.num_voted_users));
	printf("%s,", elem.cast_total_facebook_likes == -1 ? "" : notNum(numeric_tmp, elem.cast_total_facebook_likes));
	printf("%s,", strcmp(elem.actor_3_name, "~")?"":elem.actor_3_name );
	printf("%s,", elem.facenumber_in_poster == -1 ? "" : notNum(numeric_tmp, elem.facenumber_in_poster));
	printf("%s,", strcmp(elem.plot_keywords, "~")?"":elem.plot_keywords );
	printf("%s,", strcmp(elem.movie_imdb_link, "~")?"":elem.movie_imdb_link );
	printf("%s,", elem.num_user_for_reviews == -1 ? "" : notNum(numeric_tmp, elem.num_user_for_reviews));	
	printf("%s,", strcmp(elem.language, "~")?"":elem.language );
	printf("%s,", strcmp(elem.country, "~")?"":elem.country );
	printf("%s,", strcmp(elem.content_rating, "~")?"":elem.content_rating );
	printf("%s,", elem.budget == -1 ? "" : notNum(numeric_tmp, elem.budget));
	printf("%s,", elem.title_year == -1 ? "" : notNum(numeric_tmp, elem.title_year));
	printf("%s,", elem.actor_2_facebook_likes == -1 ? "" : notNum(numeric_tmp, elem.actor_2_facebook_likes));
	printf("%s,", elem.imdb_score == -1 ? "" : notDouble(numeric_tmp, elem.imdb_score));
	printf("%s,", elem.aspect_ratio == -1 ? "" : notDouble(numeric_tmp, elem.aspect_ratio));
	printf("%s\n", elem.movie_facebook_likes == -1 ? "" : notNum(numeric_tmp, elem.movie_facebook_likes));

	free(numeric_tmp);
}