/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSMutableArray;

@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {

	NSMutableArray* _subpaths;

}
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
+(id)directorySubpathsOperationAtPath:(id)arg1 ;
-(void)handlePathname:(id)arg1 ;
-(id)subpaths;
-(void)dealloc;
@end

