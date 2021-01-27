//7,62x51 M62A1 EPR (Tracer)
class GEGVAR(ammo,TRIPLES(762x51,m62a1t,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x51_m62a1t_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(762x51,m62a1t,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x51_m62a1t_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m62a1t,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m62a1t,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x51_m62a1t_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m62a1t,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m62a1t,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x51_m62a1t_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m62a1t,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m62a1t,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x51_m62a1t_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m62a1t,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m62a1t,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x51_m62a1t_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m62a1t,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m62a1t,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(762x51_m62a1t_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m62a1t,1Rnd));
};
