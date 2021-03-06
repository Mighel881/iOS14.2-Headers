/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MailSupport/MSAttachmentInfo.h>

@class NSString;

@interface MFComposeAttachmentInfo : MSAttachmentInfo {

	BOOL _isBasicImage;
	BOOL _isDisplayableImage;
	NSString* _className;

}

@property (nonatomic,readonly) BOOL isBasicImage;                      //@synthesize isBasicImage=_isBasicImage - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayableImage;                //@synthesize isDisplayableImage=_isDisplayableImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * className;              //@synthesize className=_className - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isDisplayableImage;
-(BOOL)isBasicImage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 filename:(id)arg2 isBasicImage:(BOOL)arg3 isDisplayableImage:(BOOL)arg4 className:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)className;
@end

