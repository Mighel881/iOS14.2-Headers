/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFWebResource.h>

@class WFFileRepresentation;

@interface WFFileWebResource : WFWebResource {

	WFFileRepresentation* _file;

}

@property (nonatomic,readonly) WFFileRepresentation * file;              //@synthesize file=_file - In the implementation block
+(BOOL)supportsSecureCoding;
-(WFFileRepresentation *)file;
-(void)encodeWithCoder:(id)arg1 ;
-(id)MIMEType;
-(id)data;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(id)loadInWKWebView:(id)arg1 ;
@end

