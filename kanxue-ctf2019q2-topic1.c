unsigned __int8 v9; // [esp+10h] [ebp-3Ch]

unsigned __int8 v10; // [esp+11h] [ebp-3Bh]

unsigned __int8 v11; // [esp+12h] [ebp-3Ah]

char v12; // [esp+13h] [ebp-39h]

char v13; // [esp+14h] [ebp-38h]

char v14; // [esp+15h] [ebp-37h]



v4 = strlen((const char *)&v9);

if ( v4 < 7 && v14 == 51 && v13 == 53 && v12 == 51 && v11 + v10 + v9 == 149 )

{// ) + )

v6 = 0;

if ( v4 )

{

do

v3 = *(&v9 + v6++) + 16 * v3 - 48;

while ( v6 < v4 );

}
