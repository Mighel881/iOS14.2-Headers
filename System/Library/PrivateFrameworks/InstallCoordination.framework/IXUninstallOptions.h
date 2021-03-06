/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IXUninstallOptions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requestUserConfirmation;
	BOOL _waitForDeletion;
	BOOL _showArchiveOption;

}

@property (assign,nonatomic) BOOL requestUserConfirmation;              //@synthesize requestUserConfirmation=_requestUserConfirmation - In the implementation block
@property (assign,nonatomic) BOOL waitForDeletion;                      //@synthesize waitForDeletion=_waitForDeletion - In the implementation block
@property (assign,nonatomic) BOOL showArchiveOption;                    //@synthesize showArchiveOption=_showArchiveOption - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)waitForDeletion;
-(id)description;
-(void)setWaitForDeletion:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequestUserConfirmation:(BOOL)arg1 ;
-(void)setShowArchiveOption:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)requestUserConfirmation;
-(BOOL)showArchiveOption;
@end

