/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface EDImportantMLModelOutput : NSObject <MLFeatureProvider> {

	long long _important;
	NSDictionary* _importantProbability;

}

@property (assign,nonatomic) long long important;                              //@synthesize important=_important - In the implementation block
@property (nonatomic,retain) NSDictionary * importantProbability;              //@synthesize importantProbability=_importantProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(long long)important;
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(void)setImportant:(long long)arg1 ;
-(id)initWithImportant:(long long)arg1 importantProbability:(id)arg2 ;
-(NSDictionary *)importantProbability;
-(void)setImportantProbability:(NSDictionary *)arg1 ;
@end

