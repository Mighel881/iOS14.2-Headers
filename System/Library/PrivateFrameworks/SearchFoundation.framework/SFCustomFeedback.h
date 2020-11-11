/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SFFeedback.h>

@class NSDictionary, NSData;

@interface SFCustomFeedback : SFFeedback {

	unsigned long long _feedbackType;
	NSDictionary* _jsonFeedback;
	NSData* _data;

}

@property (assign,nonatomic) unsigned long long feedbackType;              //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,copy) NSDictionary * jsonFeedback;                    //@synthesize jsonFeedback=_jsonFeedback - In the implementation block
@property (nonatomic,copy) NSData * data;                                  //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setJsonFeedback:(NSDictionary *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 jsonFeedback:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFeedbackType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(NSData *)data;
-(unsigned long long)feedbackType;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)jsonFeedback;
@end
