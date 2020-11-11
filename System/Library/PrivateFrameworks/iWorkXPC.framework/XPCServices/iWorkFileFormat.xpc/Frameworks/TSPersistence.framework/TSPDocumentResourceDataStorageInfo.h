/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class TSPDocumentResourceInfo;


@protocol TSPDocumentResourceDataStorageInfo <NSObject>
@property (nonatomic,readonly) id<TSUResourceRequest> resourceRequest; 
@property (nonatomic,readonly) TSPDocumentResourceInfo * documentResourceInfo; 
@required
-(id<TSUResourceRequest>)resourceRequest;
-(TSPDocumentResourceInfo *)documentResourceInfo;

@end
