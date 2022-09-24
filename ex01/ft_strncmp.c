int ft_cmpchar(char a1, char a2)
{
	    if((unsigned char)a1 != (unsigned char)a2)
		        {
				        return((unsigned char)a1 - (unsigned char)a2);
					    }
	        return(0);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	    size_t  i;

	        i = 0;
		    while(s1[i] && s2[i] && i < n)
			        {
					        if(ft_cmpchar(s1[i], s2[i]))
							            return(s1[i] - s2[i]);
						        i++;
							    }
		        if(i < n)
				    {
					            return(ft_cmpchar(s1[i], s2[i]))
							        }
			    return(0);
}
