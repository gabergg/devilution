/*
 * UNPUBLISHED -- Rights  reserved  under  the  copyright  laws  of the
 * United States.  Use  of a copyright notice is precautionary only and
 * does not imply publication or disclosure.
 *
 * THIS DOCUMENTATION CONTAINS CONFIDENTIAL AND PROPRIETARY INFORMATION
 * OF    BLIZZARD   ENTERTAINMENT.    ANY   DUPLICATION,  MODIFICATION,
 * DISTRIBUTION, OR DISCLOSURE IS STRICTLY PROHIBITED WITHOUT THE PRIOR
 * EXPRESS WRITTEN PERMISSION OF BLIZZARD ENTERTAINMENT.
 */

void __fastcall town_clear_upper_buf(int a1);
void __fastcall town_clear_low_buf(int y_related);
void __fastcall town_draw_clipped_e_flag(void *buffer, int x, int y, int sx, int sy);
void __fastcall town_draw_clipped_town(void *unused, int x, int y, int sx, int sy, int some_flag);
void __fastcall town_draw_lower(int x, int y, int sx, int sy, int a5, int some_flag);
void __fastcall town_draw_clipped_e_flag_2(void *buffer, int x, int y, int a4, int a5, int sx, int sy);
void __fastcall town_draw_clipped_town_2(int x, int y, int a3, int a4, int a5, int sx, int sy, int some_flag);
void __fastcall town_draw_lower_2(int x, int y, int sx, int sy, int a5, int a6, int some_flag);
void __fastcall town_draw_e_flag(void *buffer, int x, int y, int a4, int dir, int sx, int sy);
void __fastcall town_draw_town_all(void *buffer, int x, int y, int a4, int dir, int sx, int sy, int some_flag);
void __fastcall town_draw_upper(int x, int y, int sx, int sy, int a5, int a6, int some_flag);
void __fastcall T_DrawGame(int x, int y);
void __fastcall T_DrawZoom(int x, int y);
void __fastcall T_DrawView(int StartX, int StartY);
void __cdecl town_init_dpiece_defs_map();
void __fastcall T_FillSector(unsigned char *P3Tiles, unsigned char *pSector, int xi, int yi, int w, int h);
void __fastcall T_FillTile(unsigned char *P3Tiles, int xx, int yy, int t);
void __cdecl T_Pass3();
void __fastcall CreateTown(int entry);