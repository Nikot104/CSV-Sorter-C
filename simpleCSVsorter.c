#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "simpleCSVsorter.h"

int main(int argc, char* argv[]){
	char buffer[1000];
	Movie* arr = malloc(initial_size*sizeof(Movie));

	//run line once
	fgets(buffer, 1000, stdin);
	printf("%s\n", buffer);
	
	int i = 0;
	for(i = 0; !feof(stdin); i++){
		//reallocation if exceeds initial size
		if(i%initial_size == 0 && i!=0){
			arr = realloc(arr, sizeof(Movie)*initial_size*(i/initial_size)+ initial_size*sizeof(Movie));
		}
		
		//puts each row in to a struct
		fgets(buffer, 1000, stdin);
		char* tmp = malloc(1000);
		strcpy(tmp, buffer);
		char *tok = tmp, *end = tmp;
		strsep(&end, ",");
		arr[i].color = strdup(tok);
		if(arr[i].color[0] == '\0')
		{
			arr[i].color = "~";
		}
		tok = end;
		strsep(&end, ",");
		arr[i].director_name = strdup(tok);
		if(!arr[i].director_name)
		{
			arr[i].director_name = "~";
		}
		tok = end;
		strsep(&end, ",");
		arr[i].num_critic_for_reviews = atoi(strdup(tok));
		if(arr[i].num_critic_for_reviews == NULL)
		{
			arr[i].num_critic_for_reviews = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].duration = atoi(strdup(tok));
		if(arr[i].duration == NULL)
		{
			arr[i].duration = 0;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].director_facebook_likes = atoi(strdup(tok));
		if(arr[i].director_facebook_likes == NULL)
		{
			arr[i].director_facebook_likes = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].actor_3_facebook_likes = atoi(strdup(tok));
		if(arr[i].actor_3_facebook_likes == NULL)
		{
			arr[i].actor_3_facebook_likes = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].actor_2_name = strdup(tok);
		if(arr[i].actor_2_name == '\0')
		{
			arr[i].actor_2_name = "~";
		}

		tok = end;
		strsep(&end, ",");
		arr[i].actor_1_facebook_likes = atoi(strdup(tok));
		if(arr[i].actor_1_facebook_likes == NULL)
		{
			arr[i].actor_1_facebook_likes = -1;
		}	
		tok = end;
		strsep(&end, ",");
		arr[i].gross = atof(strdup(tok));
		if(!arr[i].gross)
		{
			arr[i].gross = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].genres = strdup(tok);
		if(arr[i].genres == '\0')
		{
			arr[i].genres = "~";
		}
	
		tok = end;
		strsep(&end, ",");
		arr[i].actor_1_name = strdup(tok);
		if(arr[i].actor_1_name == '\0')
		{
			arr[i].actor_1_name = "~";
		}
		tok = end;
		strsep(&end, ",");
		arr[i].movie_title = strdup(tok);
		if(arr[i].movie_title == '\0')
		{
			arr[i].movie_title = "~";
		}
		tok = end;
		char* title = (char*)malloc(sizeof(char)*1000);
		title = strdup(arr[i].movie_title);
		if(title[0] == '\"'){
			strsep(&end, "\"");
			strcat(arr[i].movie_title, ",");
			strcat(arr[i].movie_title, tok);
			tok = end;
			strcat(arr[i].movie_title, "\"");
		}
		free(title);
		strsep(&end, ",");
		arr[i].num_voted_users = atoi(strdup(tok));
		if(arr[i].num_voted_users == NULL)
		{
			arr[i].num_voted_users = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].cast_total_facebook_likes = atoi(strdup(tok));
		if(arr[i].cast_total_facebook_likes == NULL)
		{
			arr[i].cast_total_facebook_likes = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].actor_3_name = strdup(tok);
		if(arr[i].actor_3_name == '\0')
		{
			arr[i].actor_3_name = "~";
		}
		tok = end;
		strsep(&end, ",");
		arr[i].facenumber_in_poster = atoi(strdup(tok));
		if(arr[i].facenumber_in_poster == NULL)
		{
			arr[i].facenumber_in_poster = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].plot_keywords = strdup(tok);
		if(arr[i].plot_keywords == '\0')
		{
			arr[i].plot_keywords = "~";
		}
		tok = end;
		strsep(&end, ",");
		arr[i].movie_imdb_link = strdup(tok);
		if(arr[i].movie_imdb_link == '\0')
		{
			arr[i].movie_imdb_link = "~";
		}
		tok = end;
		strsep(&end, ",");
		arr[i].num_user_for_reviews = atoi(strdup(tok));
		if(arr[i].num_user_for_reviews == NULL)
		{
			arr[i].num_user_for_reviews = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].language = strdup(tok);
		if(arr[i].language == '\0')
		{
			arr[i].language = "~";
		}
		tok = end;
		strsep(&end, ",");
		arr[i].country = strdup(tok);
		if(arr[i].country == '\0')
		{
			arr[i].country = "~";
		}
		tok = end;
		strsep(&end, ",");
		arr[i].content_rating = strdup(tok);
		if(arr[i].content_rating == '\0')
		{
			arr[i].content_rating = "~";
		}
		tok = end;
		strsep(&end, ",");
		arr[i].budget = atof(strdup(tok));
		if(!arr[i].budget)
		{
			arr[i].budget = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].title_year = atoi(strdup(tok));
		if(arr[i].title_year == NULL)
		{
			arr[i].title_year = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].actor_2_facebook_likes = atoi(strdup(tok));
		if(arr[i].actor_2_facebook_likes == NULL)
		{
			arr[i].actor_2_facebook_likes = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].imdb_score = atof(strdup(tok));
		if(!arr[i].imdb_score)
		{
			arr[i].imdb_score = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].aspect_ratio = atof(strdup(tok));
		if(!arr[i].aspect_ratio)
		{
			arr[i].aspect_ratio = -1;
		}
		tok = end;
		strsep(&end, ",");
		arr[i].movie_facebook_likes = atoi(strdup(tok));
		if(arr[i].movie_facebook_likes == NULL)
		{
			arr[i].movie_facebook_likes = -1;
		}
		tok = end;
		free(tmp);

	}
	int total = i-1;
	int j =1;
	
	//checks to sort by which category
	char* catacory= (char*)malloc(sizeof(char)*1000);
	strcpy(catacory, argv[2]);

	if(strcmp(argv[2],"director_name") == 0){
	mergesort(arr, 0, total, "director_name");
	}else{
		if(strcmp(argv[2],"color") == 0){
			mergesort(arr, 0, total, "color");
		}else{
			if(strcmp(argv[2],"num_critic_for_reviews") == 0){
					mergesort(arr, 0, total, "num_critic_for_reviews");
			}else{
				if(strcmp(argv[2],"duration") == 0){
					mergesort(arr, 0, total, "duration");
				}else{
					if(strcmp(argv[2],"director_facebook_likes") == 0){
						mergesort(arr, 0, total, "director_facebook_likes");
					}else{
						if(strcmp(argv[2],"actor_3_facebook_likes") == 0){
							mergesort(arr, 0, total, "actor_3_facebook_likes");
						}else{
							if(strcmp(argv[2],"actor_2_name") == 0){
								mergesort(arr, 0, total, "actor_2_name");
							}else{
								if(strcmp(argv[2],"actor_1_facebook_likes") == 0){
									mergesort(arr, 0, total, "actor_1_facebook_likes");
								}else{
									if(strcmp(argv[2],"gross") == 0){
										mergesort(arr, 0, total, "gross");
									}else{
										if(strcmp(argv[2],"genres") == 0){
											mergesort(arr, 0, total, "genres");
										}else{
											if(strcmp(argv[2],"actor_1_name") == 0){
												mergesort(arr, 0, total, "actor_1_name");
											}else{
												if(strcmp(argv[2],"movie_title") == 0){
													mergesort(arr, 0, total, "movie_title");
												}else{
													if(strcmp(argv[2],"num_voted_users") == 0){
														mergesort(arr, 0, total, "num_voted_users");
													}else{
														if(strcmp(argv[2],"plot_keywords") == 0){
															mergesort(arr, 0, total, "plot_keywords");
															}else{
															if(strcmp(argv[2],"movie_imdb_link") == 0){
																mergesort(arr, 0, total, "movie_imdb_link");
																	}else{
																		if(strcmp(argv[2],"num_user_for_reviews") == 0){
																			mergesort(arr, 0, total, "num_user_for_reviews");
																		}else{	
																			if(strcmp(argv[2],"language") == 0){
																				mergesort(arr, 0, total, "language");
																				}else{
																				if(strcmp(argv[2],"country") == 0){
																					mergesort(arr, 0, total, "country");}else{
																					if(strcmp(argv[2],"content_rating") == 0){
																						mergesort(arr, 0, total, "content_rating");}else{
																						if(strcmp(argv[2],"budget") == 0){
																							mergesort(arr, 0, total, "budget");}else{
																							if(strcmp(argv[2],"title_year") == 0){
																								mergesort(arr, 0, total, "title_year");}else{
																								if(strcmp(argv[2],"actor_2_facebook_likes") == 0){
																									mergesort(arr, 0, total, "actor_2_facebook_likes");}else{
																										if(strcmp(argv[2],"imdb_score") == 0){
																											mergesort(arr, 0, total, "imdb_score");}else{
																												if(strcmp(argv[2],"aspect_ratio") == 0){
																													mergesort(arr, 0, total, "aspect_ratio");}else{
																													if(strcmp(argv[2],"movie_facebook_likes") == 0){
																														mergesort(arr, 0, total, "movie_facebook_likes");}else{
																														fprintf( stderr, "Invalid input. Column does not exist.");
																															exit(-1);
	}
	}
	}
	}
	}
	}
	}
	}

																			}
																		}
																	}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}



	j = 0;
	//prints out output
	while(j < i){
		printElement(arr[j]);	
		j++;
	}

	fflush(stdout);	
	free(catacory);
	free(arr);

		
}



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




