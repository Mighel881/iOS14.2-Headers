/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSItemProviderReading.h>

@class NSArray, NSString;

@interface MFComposeRecipients : NSObject <NSItemProviderReading> {

	NSArray* _recipients;

}

@property (nonatomic,copy,readonly) NSArray * recipients;              //@synthesize recipients=_recipients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)readableTypeIdentifiersForItemProvider;
-(NSArray *)recipients;
-(id)initWithRecipients:(id)arg1 ;
@end
