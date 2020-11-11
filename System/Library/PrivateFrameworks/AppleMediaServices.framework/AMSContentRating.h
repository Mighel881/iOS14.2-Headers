/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface AMSContentRating : NSObject {

	NSString* _contentRatingID;
	NSString* _kind;
	NSString* _label;
	NSString* _name;
	NSNumber* _value;

}

@property (nonatomic,readonly) NSString * contentRatingID;              //@synthesize contentRatingID=_contentRatingID - In the implementation block
@property (nonatomic,readonly) NSString * kind;                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                        //@synthesize value=_value - In the implementation block
+(id)contentRatingWithDictionary:(id)arg1 ;
-(NSString *)kind;
-(NSString *)label;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)contentRatingID;
-(NSNumber *)value;
@end
