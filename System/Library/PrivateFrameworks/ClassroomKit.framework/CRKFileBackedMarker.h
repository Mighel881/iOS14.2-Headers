/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKMarker.h>

@class NSURL, NSString;

@interface CRKFileBackedMarker : NSObject <CRKMarker> {

	NSURL* mFileURL;

}

@property (nonatomic,readonly) BOOL exists; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)exists;
-(id)init;
-(BOOL)deleteWithError:(id*)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)createWithError:(id*)arg1 ;
@end

