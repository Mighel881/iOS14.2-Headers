/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUHTMLParserDelegate.h>

@class NSDictionary, NSString;

@interface _MPUHTMLDefaultDelegate : NSObject <MPUHTMLParserDelegate> {

	NSDictionary* _defaultAttributes;

}

@property (nonatomic,retain) NSDictionary * defaultAttributes;              //@synthesize defaultAttributes=_defaultAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parser:(id)arg1 attributesForTagName:(id)arg2 tagAttributes:(id)arg3 currentState:(id)arg4 ;
-(id)defaultAttributesForParser:(id)arg1 ;
-(id)parser:(id)arg1 prependStringForTagName:(id)arg2 ;
-(NSDictionary *)defaultAttributes;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
@end

