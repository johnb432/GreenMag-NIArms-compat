//7,92x57 S.m.K. L'spur (Tracer)
class GEGVAR(ammo,TRIPLES(792x57,SmKL,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmKL_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(792x57,SmKL,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmKL_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmKL,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmKL,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmKL_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmKL,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmKL,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmKL_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmKL,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmKL,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmKL_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmKL,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmKL,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmKL_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmKL,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,SmKL,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(792x57_SmKL_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,SmKL,1Rnd));
};
