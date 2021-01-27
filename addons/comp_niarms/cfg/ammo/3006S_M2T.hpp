//.30-06 Springfield M2 FMJ (Tracer)
class GEGVAR(ammo,TRIPLES(3006S,M2T,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(3006S_M2T_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(3006S,M2T,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(3006S_M2T_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(3006S,M2T,1Rnd));
};
class GEGVAR(ammo,TRIPLES(3006S,M2T,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(3006S_M2T_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(3006S,M2T,1Rnd));
};
class GEGVAR(ammo,TRIPLES(3006S,M2T,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(3006S_M2T_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(3006S,M2T,1Rnd));
};
class GEGVAR(ammo,TRIPLES(3006S,M2T,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(3006S_M2T_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(3006S,M2T,1Rnd));
};
class GEGVAR(ammo,TRIPLES(3006S,M2T,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(3006S_M2T_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(3006S,M2T,1Rnd));
};
class GEGVAR(ammo,TRIPLES(3006S,M2T,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(3006S_M2T_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(3006S,M2T,1Rnd));
};
