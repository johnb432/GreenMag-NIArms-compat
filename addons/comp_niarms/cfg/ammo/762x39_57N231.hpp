//7,62x39 57-N-231 FMJ
class GEGVAR(ammo,TRIPLES(762x39,57N231,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(762x39,57N231,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231,1Rnd));
};
