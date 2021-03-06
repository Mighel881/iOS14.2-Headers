/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/ShotflowDetectorANODBase.h>

@interface ShotflowDetectorANODv3 : ShotflowDetectorANODBase
+(Class)shotflowNetworkClass;
+(id)filterThresholds;
+(id)supportedLabelKeys;
-(id)initWithNetwork:(id)arg1 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2 ;
-(id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2 ;
@end

