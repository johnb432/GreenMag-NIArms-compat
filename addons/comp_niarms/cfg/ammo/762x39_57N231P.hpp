//7,62x39 57-N-231P FMJ (Tracer)
class GEGVAR(ammo,TRIPLES(762x39,57N231P,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231P_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(762x39,57N231P,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231P_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231P,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231P,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231P_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231P,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231P,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231P_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231P,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231P,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231P_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231P,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231P,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231P_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231P,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,57N231P,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x39_57N231P_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,57N231P,1Rnd));
};
