/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXButtonComponentTextProvider.h>

@protocol SXSubscriptionButtonTextProviding;
@class NSString;

@interface SXSubscriptionButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider> {

	id<SXSubscriptionButtonTextProviding> _textProvider;

}

@property (nonatomic,readonly) id<SXSubscriptionButtonTextProviding> textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXSubscriptionButtonTextProviding>)textProvider;
-(id)initWithTextProvider:(id)arg1 ;
-(id)textForComponent:(id)arg1 ;
@end
