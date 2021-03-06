/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SGMicrodataItem;

@interface SGMicrodataItemProp : NSObject {

	NSString* _propertyName;
	NSString* _stringValue;
	SGMicrodataItem* _itemValue;

}

@property (nonatomic,readonly) NSString * propertyName;                  //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) SGMicrodataItem * itemValue;              //@synthesize itemValue=_itemValue - In the implementation block
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)stringValue;
-(NSString *)propertyName;
-(SGMicrodataItem *)itemValue;
@end

