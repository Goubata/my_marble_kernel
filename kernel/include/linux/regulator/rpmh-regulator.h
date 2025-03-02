#ifndef RPMH_REGULATOR_H
#define RPMH_REGULATOR_H

struct rpmh_vreg;
void rpmh_regulator_send_aggregate_requests(struct rpmh_vreg *vreg);

#endif
