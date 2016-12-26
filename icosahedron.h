static const int8_t icosahedron_vertices[] PROGMEM = {
  0, -78, 127, 127, 0, 78, 127, 0, -78, -127, 0, -78, -127, 0, 78, -78, 127, 0,
  78, 127, 0, 78, -127, 0, -78, -127, 0, 0, -78, -127, 0, 78, -127, 0, 78,
  127};

static const float icosahedron_normal_scale = 7.355688e-03;
static const int8_t icosahedron_normals[] PROGMEM = {
  127, 48, 0, 127, -48, 0, -127, 48, 0, -127, -48, 0, 0, 127, 48, 0, 127, -48,
  48, 0, -127, -48, 0, -127, 0, -127, -48, 0, -127, 48, 48, 0, 127, -48, 0,
  127, 78, 78, -78, 78, 78, 78, -78, 78, -78, -78, 78, 78, 78, -78, -78, 78,
  -78, 78, -78, -78, -78, -78, -78, 78};

static const uint8_t icosahedron_faces[] PROGMEM = {
  1, 2, 6, 1, 7, 2, 3, 4, 5, 4, 3, 8, 6, 5, 11, 5, 6, 10, 9, 10, 2, 10, 9, 3,
  7, 8, 9, 8, 7, 0, 11, 0, 1, 0, 11, 4, 6, 2, 10, 1, 6, 11, 3, 5, 10, 5, 4, 11,
  2, 7, 9, 7, 1, 0, 3, 9, 8, 4, 8, 0};

