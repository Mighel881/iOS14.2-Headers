/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class RTVisit, RTLocation, RTVisitHyperParameter, NSString;

@interface RTVisitPipelineModuleSpeedCluster : NSObject <RTVisitPipelineModule> {

	RTVisit* _workingVisit;
	RTLocation* _lastPoint;
	RTVisitHyperParameter* _hyperParameter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)clearAndAddForcedExitSignalToClusters:(id)arg1 ;
-(id)initWithHyperParameter:(id)arg1 ;
-(id)process:(id)arg1 ;
-(void)clearWorkingVisit;
@end

