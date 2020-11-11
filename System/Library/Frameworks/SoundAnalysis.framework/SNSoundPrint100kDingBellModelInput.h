/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNSoundPrint100kDingBellModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _soundprint_Placeholder;

}

@property (nonatomic,retain) MLMultiArray * soundprint_Placeholder;              //@synthesize soundprint_Placeholder=_soundprint_Placeholder - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithSoundprint_Placeholder:(id)arg1 ;
-(MLMultiArray *)soundprint_Placeholder;
-(void)setSoundprint_Placeholder:(MLMultiArray *)arg1 ;
@end
