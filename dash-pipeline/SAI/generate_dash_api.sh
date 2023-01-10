#!/bin/bash
./sai_api_gen.py \
    /bmv2/dash_pipeline.bmv2/dash_pipeline_p4rt.json \
    --ignore-tables=appliance,eni_meter,slb_decap \
    dash
cp /bmv2/dash_pipeline.bmv2/dash_pipeline_p4rt.json ./lib
cp /bmv2/dash_pipeline.bmv2/dash_pipeline_p4rt.txt ./lib
cp -r debian/ ./lib
