/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DCDocumentCameraViewServiceSessionRequest, ICDocCamImageCache;

@interface DCDocumentCameraViewServiceSession : NSObject <NSSecureCoding> {

	int _viewServicePid;
	DCDocumentCameraViewServiceSessionRequest* _sessionRequest;
	ICDocCamImageCache* _docCamImageCache;

}

@property (nonatomic,readonly) DCDocumentCameraViewServiceSessionRequest * sessionRequest;              //@synthesize sessionRequest=_sessionRequest - In the implementation block
@property (nonatomic,readonly) int viewServicePid;                                                      //@synthesize viewServicePid=_viewServicePid - In the implementation block
@property (nonatomic,readonly) ICDocCamImageCache * docCamImageCache;                                   //@synthesize docCamImageCache=_docCamImageCache - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setup;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DCDocumentCameraViewServiceSessionRequest *)sessionRequest;
-(int)viewServicePid;
-(id)initWithSessionRequest:(id)arg1 ;
-(ICDocCamImageCache *)docCamImageCache;
@end

