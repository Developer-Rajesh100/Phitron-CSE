# Generated by Django 5.1.1 on 2024-09-28 15:18

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='TaskModel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('title', models.CharField(max_length=50)),
                ('description', models.TextField()),
                ('is_completed', models.BooleanField(default=False)),
                ('task_assign_date', models.DateField(auto_now_add=True, verbose_name='Date')),
            ],
        ),
    ]
