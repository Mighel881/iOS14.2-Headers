/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AXLiveRegionNode : NSObject {

	NSString* _label;
	NSString* _value;
	unsigned long long _traits;
	id _object;

}

@property (nonatomic,retain) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long traits;              //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic,__weak) id object;                       //@synthesize object=_object - In the implementation block
+(id)createNodeFromObject:(id)arg1 ;
-(unsigned long long)traits;
-(NSString *)label;
-(void)setObject:(id)arg1 ;
-(void)setTraits:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)value;
-(void)setLabel:(NSString *)arg1 ;
-(id)object;
-(void)setValue:(NSString *)arg1 ;
@end
