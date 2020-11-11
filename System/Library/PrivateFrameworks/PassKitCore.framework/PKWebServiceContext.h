/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKWebServiceContext : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg1 error:(id*)arg2 ;
+(id)contextWithArchive:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)archiveAtPath:(id)arg1 ;
-(BOOL)archiveAtPath:(id)arg1 error:(id*)arg2 ;
@end
