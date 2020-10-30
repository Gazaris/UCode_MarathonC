#include "playlist.h"

t_list *mx_parse_songs(char *src, int count) {
    t_list *dst;
    int n_count, i = 0;
    char *artist = NULL;
    char *name = NULL;
    if (src) {
        for(; i < count; i++) {
            n_count = 0;
            while (src[n_count] != ',')
                n_count++;
            artist = mx_strnew(n_count);
            artist = mx_strncpy(artist, src, n_count);
            src = mx_strstr(src, ",");
            src++;

            n_count = 0;
            while (src[n_count] != '\n')
                n_count++;
            name = mx_strnew(n_count);
            name = mx_strncpy(name, src, n_count);
            src = mx_strstr(src, "\n");
            src++;
            
            if(dst = NULL)
            {
                dst = mx_create_node();
                dst->artist = artist;
                dst->name = name;
            }
            else
                mx_push_back(dst, artist, name);
            free(artist);
            free(name);
        }
        return dst;
    }
    return NULL;
}