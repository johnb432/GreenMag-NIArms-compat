//7,62x54 7T2 (Tracer)
class GEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x54_7T2_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(762x54,7T2,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x54_7T2_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7T2,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x54_7T2_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7T2,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x54_7T2_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7T2,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x54_7T2_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7T2,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x54_7T2_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7T2,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x54_7T2_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd));
};