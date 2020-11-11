/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface FCUserVectorModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _user_vector;

}

@property (nonatomic,retain) MLMultiArray * user_vector;              //@synthesize user_vector=_user_vector - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(MLMultiArray *)user_vector;
-(id)initWithUser_vector:(id)arg1 ;
-(void)setUser_vector:(MLMultiArray *)arg1 ;
@end
