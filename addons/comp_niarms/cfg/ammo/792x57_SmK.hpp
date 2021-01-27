//7,92x57 S.m.K (AP) steel core
class GEGVAR(ammo,TRIPLES(792x57,SmK,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmK_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(792x57,SmK,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmK_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmK,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmK_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmK,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmK_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmK,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmK_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmK,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmK_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmK,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmK_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmK,1Rnd));
};
