/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CNVCardPropertyItem : NSObject {

	id _value;
	NSString* _label;
	NSString* _identifier;

}

@property (readonly) id value;                           //@synthesize value=_value - In the implementation block
@property (readonly) NSString * label;                   //@synthesize label=_label - In the implementation block
@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)itemWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
-(NSString *)label;
-(NSString *)identifier;
-(id)description;
-(id)value;
-(id)initWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
@end

