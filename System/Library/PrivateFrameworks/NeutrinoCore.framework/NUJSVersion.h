/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NUJSObject.h>

@class NUVersion;

@interface NUJSVersion : NUJSObject

@property (nonatomic,readonly) NUVersion * version; 
-(BOOL)hasProperty:(id)arg1 ;
-(NUVersion *)version;
-(id)toString;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)initWithVersion:(id)arg1 context:(id)arg2 ;
@end
