#include "cfg-parser.h"
#include "plugin.h"

extern CfgParser afstreams_parser;

static Plugin afstreams_plugins[] =
{
  {
    .type = LL_CONTEXT_SOURCE,
    .name = "sun-streams",
    .parser = &afstreams_parser,
  },
};

gboolean
syslogng_module_init(void)
{
  plugin_register(afstreams_plugins, G_N_ELEMENTS(afstreams_plugins));
  return TRUE;
}
