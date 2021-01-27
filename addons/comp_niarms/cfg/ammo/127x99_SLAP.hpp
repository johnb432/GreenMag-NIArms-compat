//12.7x99 SLAP 50BMG
class GEGVAR(ammo,TRIPLES(127x99,SLAP,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(127x99_SLAP_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\127mm.paa);
};
class GEGVAR(ammo,TRIPLES(127x99,SLAP,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(127x99_SLAP_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,SLAP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,SLAP,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(127x99_SLAP_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,SLAP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,SLAP,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(127x99_SLAP_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,SLAP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,SLAP,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(127x99_SLAP_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,SLAP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,SLAP,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(127x99_SLAP_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,SLAP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(127x99,SLAP,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(127x99_SLAP_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(127x99,SLAP,1Rnd));
};
