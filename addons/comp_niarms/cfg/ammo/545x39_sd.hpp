//5,45x39 subsonic
class GEGVAR(ammo,TRIPLES(545x39,sd,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_sd_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\556mm.paa);
};
class GEGVAR(ammo,TRIPLES(545x39,sd,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_sd_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,sd,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,sd,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_sd_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,sd,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,sd,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_sd_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,sd,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,sd,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_sd_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,sd,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,sd,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_sd_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,sd,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,sd,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_sd_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,sd,1Rnd));
};
