#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    char entity_7[65];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    entity_5 = 10;                           // Tag.BODY
    entity_3 = rand();                       // Tag.BODY
    if(entity_3 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_3 = 98;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_3] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_3;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_2 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER