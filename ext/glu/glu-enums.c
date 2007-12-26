/* This file was genereated on Mon Jul 23 15:17:36 +0200 2007
   source: http://oss.sgi.com/cgi-bin/cvsweb.cgi/~checkout~/projects/ogl-sample/main/doc/registry/specs/enumglu.spec
*/

#include "../common/common.h"
void glu_init_enums(VALUE module)
{
	rb_define_const(module, "GLU_FALSE", Qfalse);
	rb_define_const(module, "GLU_TRUE", Qtrue);

	rb_define_const(module, "GLU_AUTO_LOAD_MATRIX", INT2NUM(GLU_AUTO_LOAD_MATRIX));
	rb_define_const(module, "GLU_BEGIN", INT2NUM(GLU_BEGIN));
	rb_define_const(module, "GLU_CCW", INT2NUM(GLU_CCW));
	rb_define_const(module, "GLU_CULLING", INT2NUM(GLU_CULLING));
	rb_define_const(module, "GLU_CW", INT2NUM(GLU_CW));
	rb_define_const(module, "GLU_DISPLAY_MODE", INT2NUM(GLU_DISPLAY_MODE));
	rb_define_const(module, "GLU_DOMAIN_DISTANCE", INT2NUM(GLU_DOMAIN_DISTANCE));
	rb_define_const(module, "GLU_EDGE_FLAG", INT2NUM(GLU_EDGE_FLAG));
	rb_define_const(module, "GLU_END", INT2NUM(GLU_END));
	rb_define_const(module, "GLU_ERROR", INT2NUM(GLU_ERROR));
	rb_define_const(module, "GLU_EXTENSIONS", INT2NUM(GLU_EXTENSIONS));
	rb_define_const(module, "GLU_EXTERIOR", INT2NUM(GLU_EXTERIOR));
	rb_define_const(module, "GLU_EXT_nurbs_tessellator", INT2NUM(GLU_EXT_nurbs_tessellator));
	rb_define_const(module, "GLU_EXT_object_space_tess", INT2NUM(GLU_EXT_object_space_tess));
	rb_define_const(module, "GLU_FILL", INT2NUM(GLU_FILL));
	rb_define_const(module, "GLU_FLAT", INT2NUM(GLU_FLAT));
	rb_define_const(module, "GLU_INSIDE", INT2NUM(GLU_INSIDE));
	rb_define_const(module, "GLU_INTERIOR", INT2NUM(GLU_INTERIOR));
	rb_define_const(module, "GLU_INVALID_ENUM", INT2NUM(GLU_INVALID_ENUM));
	rb_define_const(module, "GLU_INVALID_OPERATION", INT2NUM(GLU_INVALID_OPERATION));
	rb_define_const(module, "GLU_INVALID_VALUE", INT2NUM(GLU_INVALID_VALUE));
	rb_define_const(module, "GLU_LAGRANGIAN_SGI", INT2NUM(GLU_LAGRANGIAN_SGI));
	rb_define_const(module, "GLU_LINE", INT2NUM(GLU_LINE));
	rb_define_const(module, "GLU_MAP1_TRIM_2", INT2NUM(GLU_MAP1_TRIM_2));
	rb_define_const(module, "GLU_MAP1_TRIM_3", INT2NUM(GLU_MAP1_TRIM_3));
	rb_define_const(module, "GLU_MITCHELL_NETRAVALI_SGI", INT2NUM(GLU_MITCHELL_NETRAVALI_SGI));
	rb_define_const(module, "GLU_NONE", INT2NUM(GLU_NONE));
	rb_define_const(module, "GLU_NURBS_BEGIN", INT2NUM(GLU_NURBS_BEGIN));
	rb_define_const(module, "GLU_NURBS_BEGIN_DATA", INT2NUM(GLU_NURBS_BEGIN_DATA));
	rb_define_const(module, "GLU_NURBS_BEGIN_DATA_EXT", INT2NUM(GLU_NURBS_BEGIN_DATA_EXT));
	rb_define_const(module, "GLU_NURBS_BEGIN_EXT", INT2NUM(GLU_NURBS_BEGIN_EXT));
	rb_define_const(module, "GLU_NURBS_COLOR", INT2NUM(GLU_NURBS_COLOR));
	rb_define_const(module, "GLU_NURBS_COLOR_DATA", INT2NUM(GLU_NURBS_COLOR_DATA));
	rb_define_const(module, "GLU_NURBS_COLOR_DATA_EXT", INT2NUM(GLU_NURBS_COLOR_DATA_EXT));
	rb_define_const(module, "GLU_NURBS_COLOR_EXT", INT2NUM(GLU_NURBS_COLOR_EXT));
	rb_define_const(module, "GLU_NURBS_END", INT2NUM(GLU_NURBS_END));
	rb_define_const(module, "GLU_NURBS_END_DATA", INT2NUM(GLU_NURBS_END_DATA));
	rb_define_const(module, "GLU_NURBS_END_DATA_EXT", INT2NUM(GLU_NURBS_END_DATA_EXT));
	rb_define_const(module, "GLU_NURBS_END_EXT", INT2NUM(GLU_NURBS_END_EXT));
	rb_define_const(module, "GLU_NURBS_ERROR", INT2NUM(GLU_NURBS_ERROR));
	rb_define_const(module, "GLU_NURBS_ERROR1", INT2NUM(GLU_NURBS_ERROR1));
	rb_define_const(module, "GLU_NURBS_ERROR10", INT2NUM(GLU_NURBS_ERROR10));
	rb_define_const(module, "GLU_NURBS_ERROR11", INT2NUM(GLU_NURBS_ERROR11));
	rb_define_const(module, "GLU_NURBS_ERROR12", INT2NUM(GLU_NURBS_ERROR12));
	rb_define_const(module, "GLU_NURBS_ERROR13", INT2NUM(GLU_NURBS_ERROR13));
	rb_define_const(module, "GLU_NURBS_ERROR14", INT2NUM(GLU_NURBS_ERROR14));
	rb_define_const(module, "GLU_NURBS_ERROR15", INT2NUM(GLU_NURBS_ERROR15));
	rb_define_const(module, "GLU_NURBS_ERROR16", INT2NUM(GLU_NURBS_ERROR16));
	rb_define_const(module, "GLU_NURBS_ERROR17", INT2NUM(GLU_NURBS_ERROR17));
	rb_define_const(module, "GLU_NURBS_ERROR18", INT2NUM(GLU_NURBS_ERROR18));
	rb_define_const(module, "GLU_NURBS_ERROR19", INT2NUM(GLU_NURBS_ERROR19));
	rb_define_const(module, "GLU_NURBS_ERROR2", INT2NUM(GLU_NURBS_ERROR2));
	rb_define_const(module, "GLU_NURBS_ERROR20", INT2NUM(GLU_NURBS_ERROR20));
	rb_define_const(module, "GLU_NURBS_ERROR21", INT2NUM(GLU_NURBS_ERROR21));
	rb_define_const(module, "GLU_NURBS_ERROR22", INT2NUM(GLU_NURBS_ERROR22));
	rb_define_const(module, "GLU_NURBS_ERROR23", INT2NUM(GLU_NURBS_ERROR23));
	rb_define_const(module, "GLU_NURBS_ERROR24", INT2NUM(GLU_NURBS_ERROR24));
	rb_define_const(module, "GLU_NURBS_ERROR25", INT2NUM(GLU_NURBS_ERROR25));
	rb_define_const(module, "GLU_NURBS_ERROR26", INT2NUM(GLU_NURBS_ERROR26));
	rb_define_const(module, "GLU_NURBS_ERROR27", INT2NUM(GLU_NURBS_ERROR27));
	rb_define_const(module, "GLU_NURBS_ERROR28", INT2NUM(GLU_NURBS_ERROR28));
	rb_define_const(module, "GLU_NURBS_ERROR29", INT2NUM(GLU_NURBS_ERROR29));
	rb_define_const(module, "GLU_NURBS_ERROR3", INT2NUM(GLU_NURBS_ERROR3));
	rb_define_const(module, "GLU_NURBS_ERROR30", INT2NUM(GLU_NURBS_ERROR30));
	rb_define_const(module, "GLU_NURBS_ERROR31", INT2NUM(GLU_NURBS_ERROR31));
	rb_define_const(module, "GLU_NURBS_ERROR32", INT2NUM(GLU_NURBS_ERROR32));
	rb_define_const(module, "GLU_NURBS_ERROR33", INT2NUM(GLU_NURBS_ERROR33));
	rb_define_const(module, "GLU_NURBS_ERROR34", INT2NUM(GLU_NURBS_ERROR34));
	rb_define_const(module, "GLU_NURBS_ERROR35", INT2NUM(GLU_NURBS_ERROR35));
	rb_define_const(module, "GLU_NURBS_ERROR36", INT2NUM(GLU_NURBS_ERROR36));
	rb_define_const(module, "GLU_NURBS_ERROR37", INT2NUM(GLU_NURBS_ERROR37));
	rb_define_const(module, "GLU_NURBS_ERROR4", INT2NUM(GLU_NURBS_ERROR4));
	rb_define_const(module, "GLU_NURBS_ERROR5", INT2NUM(GLU_NURBS_ERROR5));
	rb_define_const(module, "GLU_NURBS_ERROR6", INT2NUM(GLU_NURBS_ERROR6));
	rb_define_const(module, "GLU_NURBS_ERROR7", INT2NUM(GLU_NURBS_ERROR7));
	rb_define_const(module, "GLU_NURBS_ERROR8", INT2NUM(GLU_NURBS_ERROR8));
	rb_define_const(module, "GLU_NURBS_ERROR9", INT2NUM(GLU_NURBS_ERROR9));
	rb_define_const(module, "GLU_NURBS_MODE", INT2NUM(GLU_NURBS_MODE));
	rb_define_const(module, "GLU_NURBS_MODE_EXT", INT2NUM(GLU_NURBS_MODE_EXT));
	rb_define_const(module, "GLU_NURBS_NORMAL", INT2NUM(GLU_NURBS_NORMAL));
	rb_define_const(module, "GLU_NURBS_NORMAL_DATA", INT2NUM(GLU_NURBS_NORMAL_DATA));
	rb_define_const(module, "GLU_NURBS_NORMAL_DATA_EXT", INT2NUM(GLU_NURBS_NORMAL_DATA_EXT));
	rb_define_const(module, "GLU_NURBS_NORMAL_EXT", INT2NUM(GLU_NURBS_NORMAL_EXT));
	rb_define_const(module, "GLU_NURBS_RENDERER", INT2NUM(GLU_NURBS_RENDERER));
	rb_define_const(module, "GLU_NURBS_RENDERER_EXT", INT2NUM(GLU_NURBS_RENDERER_EXT));
	rb_define_const(module, "GLU_NURBS_TESSELLATOR", INT2NUM(GLU_NURBS_TESSELLATOR));
	rb_define_const(module, "GLU_NURBS_TESSELLATOR_EXT", INT2NUM(GLU_NURBS_TESSELLATOR_EXT));
	rb_define_const(module, "GLU_NURBS_TEXTURE_COORD", INT2NUM(GLU_NURBS_TEXTURE_COORD));
	rb_define_const(module, "GLU_NURBS_TEXTURE_COORD_DATA", INT2NUM(GLU_NURBS_TEXTURE_COORD_DATA));
	rb_define_const(module, "GLU_NURBS_TEXTURE_COORD_DATA_EXT", INT2NUM(GLU_NURBS_TEXTURE_COORD_DATA_EXT));
	rb_define_const(module, "GLU_NURBS_TEXTURE_COORD_EXT", INT2NUM(GLU_NURBS_TEXTURE_COORD_EXT));
	rb_define_const(module, "GLU_NURBS_VERTEX", INT2NUM(GLU_NURBS_VERTEX));
	rb_define_const(module, "GLU_NURBS_VERTEX_DATA", INT2NUM(GLU_NURBS_VERTEX_DATA));
	rb_define_const(module, "GLU_NURBS_VERTEX_DATA_EXT", INT2NUM(GLU_NURBS_VERTEX_DATA_EXT));
	rb_define_const(module, "GLU_NURBS_VERTEX_EXT", INT2NUM(GLU_NURBS_VERTEX_EXT));
	rb_define_const(module, "GLU_OBJECT_PARAMETRIC_ERROR", INT2NUM(GLU_OBJECT_PARAMETRIC_ERROR));
	rb_define_const(module, "GLU_OBJECT_PARAMETRIC_ERROR_EXT", INT2NUM(GLU_OBJECT_PARAMETRIC_ERROR_EXT));
	rb_define_const(module, "GLU_OBJECT_PATH_LENGTH", INT2NUM(GLU_OBJECT_PATH_LENGTH));
	rb_define_const(module, "GLU_OBJECT_PATH_LENGTH_EXT", INT2NUM(GLU_OBJECT_PATH_LENGTH_EXT));
	rb_define_const(module, "GLU_OUTLINE_PATCH", INT2NUM(GLU_OUTLINE_PATCH));
	rb_define_const(module, "GLU_OUTLINE_POLYGON", INT2NUM(GLU_OUTLINE_POLYGON));
	rb_define_const(module, "GLU_OUTSIDE", INT2NUM(GLU_OUTSIDE));
	rb_define_const(module, "GLU_OUT_OF_MEMORY", INT2NUM(GLU_OUT_OF_MEMORY));
	rb_define_const(module, "GLU_PARAMETRIC_ERROR", INT2NUM(GLU_PARAMETRIC_ERROR));
	rb_define_const(module, "GLU_PARAMETRIC_TOLERANCE", INT2NUM(GLU_PARAMETRIC_TOLERANCE));
	rb_define_const(module, "GLU_PATH_LENGTH", INT2NUM(GLU_PATH_LENGTH));
	rb_define_const(module, "GLU_POINT", INT2NUM(GLU_POINT));
	rb_define_const(module, "GLU_SAMPLING_METHOD", INT2NUM(GLU_SAMPLING_METHOD));
	rb_define_const(module, "GLU_SAMPLING_TOLERANCE", INT2NUM(GLU_SAMPLING_TOLERANCE));
	rb_define_const(module, "GLU_SILHOUETTE", INT2NUM(GLU_SILHOUETTE));
	rb_define_const(module, "GLU_SMOOTH", INT2NUM(GLU_SMOOTH));
	rb_define_const(module, "GLU_TESS_BEGIN", INT2NUM(GLU_TESS_BEGIN));
	rb_define_const(module, "GLU_TESS_BEGIN_DATA", INT2NUM(GLU_TESS_BEGIN_DATA));
	rb_define_const(module, "GLU_TESS_BOUNDARY_ONLY", INT2NUM(GLU_TESS_BOUNDARY_ONLY));
	rb_define_const(module, "GLU_TESS_COMBINE", INT2NUM(GLU_TESS_COMBINE));
	rb_define_const(module, "GLU_TESS_COMBINE_DATA", INT2NUM(GLU_TESS_COMBINE_DATA));
	rb_define_const(module, "GLU_TESS_COORD_TOO_LARGE", INT2NUM(GLU_TESS_COORD_TOO_LARGE));
	rb_define_const(module, "GLU_TESS_EDGE_FLAG", INT2NUM(GLU_TESS_EDGE_FLAG));
	rb_define_const(module, "GLU_TESS_EDGE_FLAG_DATA", INT2NUM(GLU_TESS_EDGE_FLAG_DATA));
	rb_define_const(module, "GLU_TESS_END", INT2NUM(GLU_TESS_END));
	rb_define_const(module, "GLU_TESS_END_DATA", INT2NUM(GLU_TESS_END_DATA));
	rb_define_const(module, "GLU_TESS_ERROR", INT2NUM(GLU_TESS_ERROR));
	rb_define_const(module, "GLU_TESS_ERROR1", INT2NUM(GLU_TESS_ERROR1));
	rb_define_const(module, "GLU_TESS_ERROR2", INT2NUM(GLU_TESS_ERROR2));
	rb_define_const(module, "GLU_TESS_ERROR3", INT2NUM(GLU_TESS_ERROR3));
	rb_define_const(module, "GLU_TESS_ERROR4", INT2NUM(GLU_TESS_ERROR4));
	rb_define_const(module, "GLU_TESS_ERROR5", INT2NUM(GLU_TESS_ERROR5));
	rb_define_const(module, "GLU_TESS_ERROR6", INT2NUM(GLU_TESS_ERROR6));
	rb_define_const(module, "GLU_TESS_ERROR7", INT2NUM(GLU_TESS_ERROR7));
	rb_define_const(module, "GLU_TESS_ERROR8", INT2NUM(GLU_TESS_ERROR8));
	rb_define_const(module, "GLU_TESS_ERROR_DATA", INT2NUM(GLU_TESS_ERROR_DATA));
	rb_define_const(module, "GLU_TESS_MISSING_BEGIN_CONTOUR", INT2NUM(GLU_TESS_MISSING_BEGIN_CONTOUR));
	rb_define_const(module, "GLU_TESS_MISSING_BEGIN_POLYGON", INT2NUM(GLU_TESS_MISSING_BEGIN_POLYGON));
	rb_define_const(module, "GLU_TESS_MISSING_END_CONTOUR", INT2NUM(GLU_TESS_MISSING_END_CONTOUR));
	rb_define_const(module, "GLU_TESS_MISSING_END_POLYGON", INT2NUM(GLU_TESS_MISSING_END_POLYGON));
	rb_define_const(module, "GLU_TESS_NEED_COMBINE_CALLBACK", INT2NUM(GLU_TESS_NEED_COMBINE_CALLBACK));
	rb_define_const(module, "GLU_TESS_TOLERANCE", INT2NUM(GLU_TESS_TOLERANCE));
	rb_define_const(module, "GLU_TESS_VERTEX", INT2NUM(GLU_TESS_VERTEX));
	rb_define_const(module, "GLU_TESS_VERTEX_DATA", INT2NUM(GLU_TESS_VERTEX_DATA));
	rb_define_const(module, "GLU_TESS_WINDING_ABS_GEQ_TWO", INT2NUM(GLU_TESS_WINDING_ABS_GEQ_TWO));
	rb_define_const(module, "GLU_TESS_WINDING_NEGATIVE", INT2NUM(GLU_TESS_WINDING_NEGATIVE));
	rb_define_const(module, "GLU_TESS_WINDING_NONZERO", INT2NUM(GLU_TESS_WINDING_NONZERO));
	rb_define_const(module, "GLU_TESS_WINDING_ODD", INT2NUM(GLU_TESS_WINDING_ODD));
	rb_define_const(module, "GLU_TESS_WINDING_POSITIVE", INT2NUM(GLU_TESS_WINDING_POSITIVE));
	rb_define_const(module, "GLU_TESS_WINDING_RULE", INT2NUM(GLU_TESS_WINDING_RULE));
	rb_define_const(module, "GLU_UNKNOWN", INT2NUM(GLU_UNKNOWN));
	rb_define_const(module, "GLU_U_STEP", INT2NUM(GLU_U_STEP));
	rb_define_const(module, "GLU_VERSION", INT2NUM(GLU_VERSION));
	rb_define_const(module, "GLU_VERSION_1_1", INT2NUM(GLU_VERSION_1_1));
	rb_define_const(module, "GLU_VERSION_1_2", INT2NUM(GLU_VERSION_1_2));
	rb_define_const(module, "GLU_VERSION_1_3", INT2NUM(GLU_VERSION_1_3));
	rb_define_const(module, "GLU_VERTEX", INT2NUM(GLU_VERTEX));
	rb_define_const(module, "GLU_V_STEP", INT2NUM(GLU_V_STEP));
}
