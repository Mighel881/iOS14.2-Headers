/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentManager/DocumentManager-Structs.h>
#import <UIKitCore/UIBarButtonItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface DOCRemoteUIBarButtonItem : UIBarButtonItem <NSCopying> {

	NSUUID* _uuid;

}

@property (retain) NSUUID * uuid;              //@synthesize uuid=_uuid - In the implementation block
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
