#!/bin/sh

set -e
TDIR=`cd $(dirname "$0"); pwd`

node $TDIR/test_acc.js
node $TDIR/test_entities.js
node $TDIR/test_strip.js
node $TDIR/test_strip_random.js
