/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class NSString;

@interface RESimpleTextContentProvider : RETextContentProvider {

	NSString* _text;

}

@property (nonatomic,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
+(id)textContentProviderWithText:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithText:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)contentEncodedString;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
@end
