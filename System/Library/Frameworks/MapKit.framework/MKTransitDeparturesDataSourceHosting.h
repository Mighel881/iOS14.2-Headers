/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKTransitDeparturesDataSourceHosting <NSObject>
@optional
-(UIEdgeInsets*)separatorInsetsForTransitDeparturesDataSource:(id)arg1;
-(id)separatorColorForTransitDeparturesDataSource:(id)arg1;
-(void)transitDeparturesDataSource:(id)arg1 didSelectConnectionInformation:(id)arg2;
-(void)transitDeparturesDataSource:(id)arg1 showIncidents:(id)arg2;
-(void)transitDeparturesDataSource:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3;
-(void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)arg1;
-(void)transitDeparturesDataSource:(id)arg1 didSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;
-(BOOL)transitDeparturesDataSource:(id)arg1 canSelectDepartureSequence:(id)arg2 transitStationMapItem:(id)arg3 transitLine:(id)arg4 fromCell:(id)arg5;

@required
-(id)traitsForTransitDeparturesDataSource:(id)arg1;
-(void)transitDeparturesDataSourceDidReload:(id)arg1;

@end
