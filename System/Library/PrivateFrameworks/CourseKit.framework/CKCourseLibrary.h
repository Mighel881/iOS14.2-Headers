/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKSharedDatabase, NSManagedObjectContext;

@interface CKCourseLibrary : NSObject {

	CKSharedDatabase* _sharedDatabase;
	NSManagedObjectContext* _moc;

}

@property (nonatomic,retain) CKSharedDatabase * sharedDatabase;              //@synthesize sharedDatabase=_sharedDatabase - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * moc;                   //@synthesize moc=_moc - In the implementation block
+(id)sharedDocumentsDirectory;
+(id)sharedCourseLibrary;
+(BOOL)isCourseLibraryAvailable;
+(BOOL)openCourse:(id)arg1 ;
-(NSManagedObjectContext *)moc;
-(id)init;
-(CKSharedDatabase *)sharedDatabase;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(id)allCourses;
-(id)courseWithCourseID:(id)arg1 ;
-(id)courseLibrayVersion;
-(void)setSharedDatabase:(CKSharedDatabase *)arg1 ;
@end
